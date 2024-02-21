import sqlite3, hashlib
from tkinter import *
from tkinter import simpledialog
from functools import partial


#database
with sqlite3.connect("passwords_stored.db") as db:
    cursor = db.cursor()

cursor.execute("""
CREATE TABLE IF NOT EXISTS masterpassword(
id INTEGER PRIMARY KEY,
password TEXT NOT NULL);
""")

cursor.execute("""
CREATE TABLE IF NOT EXISTS vault(
id INTEGER PRIMARY KEY,
website TEXT NOT NULL,
username TEXT NOT NULL,
password TEXT NOT NULL);
""")


def popup(text):
    key = simpledialog.askstring("input String", text)
    return key


#setup our window
window = Tk()
window.title("Passwords")

def hashPassword(input):
    hash = hashlib.md5(input)
    hash = hash.hexdigest()

    return hash


def firstOpen():
    window.geometry("250x120")
    # will create label and center it with config command
    lbl = Label(window, text = "Create Master Password")
    lbl.config(anchor=CENTER)
    lbl.pack()

    #create a entry to allow for text
    txt = Entry(window, width=20)
    txt.pack()
    txt.focus

    lbl1 = Label(window, text = "Re-enter Password")
    lbl1.pack()

    txt1 = Entry(window, width=20)
    txt1.pack()
    txt1.focus

    def savePassword():
        if txt.get() == txt1.get():
            hashesPassword = hashPassword(txt.get().encode('utf-8'))

            insert_password = """INSERT INTO masterpassword(password)
            VALUES(?) """

            cursor.execute(insert_password, [(hashesPassword)])
            db.commit()
            passwordsVault()

        else:
            lbl.config(text = "passwords do not match")

    btn = Button(window, text = "Save", command = savePassword)
    btn.pack(pady = 10)

def loginScreen():
    window.geometry("250x120")
    # will create label and center it with config command
    lbl = Label(window, text = "Enter Master Password")
    lbl.config(anchor=CENTER)
    lbl.pack()

    #create a entry to allow for text
    txt = Entry(window, width=20)
    txt.pack()
    txt.focus

    lbl1 = Label(window)
    lbl1.pack()

    def getMasterPassword():
        checkHashedPassword = hashPassword(txt.get().encode('utf-8'))
        cursor.execute("SELECT * FROM masterpassword WHERE id = 1 AND password = ?", [(checkHashedPassword)])
        return cursor.fetchall()


    def checkPassword():
        match = getMasterPassword()
        if match:
            passwordsVault()
        else:
            txt.delete(0, 'end')
            lbl1.config(text="wrong password")

    #make button to submit password
    btn = Button(window, text = "Submit", command = checkPassword)
    btn.pack(pady = 15)

def passwordsVault():

    for widget in window.winfo_children():
        widget.destroy()

    def addEntry():
        txt1 = "Website"
        txt2 = "Username"
        txt3 = "Password"

        website = popup(txt1)
        username = popup(txt2)
        password = popup(txt3)

        insert_field = """INSERT INTO vault(website,username,password)
        VALUES(?, ?, ?)"""

        cursor.execute(insert_field, (website, username, password))
        db.commit()

        passwordsVault()

    def removeEntry(input):
        cursor.execute("DELETE FROM vault WHERE ID = ?", (input,))
        db.commit()
        passwordsVault()


    window.geometry("700x350")

    lbl = Label(window, text="password vault")
    lbl.grid(column=1)


    bt = Button(window, text = "+", command=addEntry)
    bt.grid(column=1, pady=10)

    lbl = Label(window, text="website")
    lbl.grid(row=2, column=0, padx=80)
    lbl = Label(window, text="username")
    lbl.grid(row=2, column=1, padx=80)
    lbl = Label(window, text="password")
    lbl.grid(row=2, column=2, padx=80)


    cursor.execute("SELECT * FROM vault")
    if(cursor.fetchall() != None):
        i = 0
        while True:
            cursor.execute("SELECT * FROM vault")
            array = cursor.fetchall()

            lbl1 = Label(window, text=(array[i][1]), font=("Helvetica", 12))
            lbl1.grid(column=0, row=i+3)
            lbl1 = Label(window, text=(array[i][2]), font=("Helvetica", 12))
            lbl1.grid(column=1, row=i+3)
            lbl1 = Label(window, text=(array[i][3]), font=("Helvetica", 12))
            lbl1.grid(column=2, row=i+3)

            bt = Button(window, text="Delete", command=partial(removeEntry, array[i][0]))
            bt.grid(column=3, row=i+3, pady=10)

            i = i+1

            cursor.execute("SELECT * FROM vault")
            if(len(cursor.fetchall()) <= i):
                break

cursor.execute("SELECT * FROM masterpassword")
if cursor.fetchall():
    loginScreen()
else:
    firstOpen()

window.mainloop()
