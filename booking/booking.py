import time
import pyautogui
from selenium.webdriver.common.by import By

import booking.constants as const
import os
from selenium.webdriver import Chrome, Keys


class Booking(Chrome):

    # initializer for our booking object with option to quit with teardown
    def __init__(self, driver_path=r"C:\SeleniumDrivers", teardown=False):
        self.driver_path = driver_path
        self.teardown = teardown
        os.environ['PATH'] += self.driver_path
        super(Booking, self).__init__()
        self.implicitly_wait(15)
        self.maximize_window()

    # exit command checks if the website should shut or stay open
    def __exit__(self, exc_type, exc_val, exc_tb):
        if self.teardown:
            self.quit()
        else:
            time.sleep(1000)

    # gets the url of website from constants class
    def land_first_page(self):
        self.get(const.URL)

    def login(self):
        button = self.find_element("xpath", "//*[@id=\"bs-example-navbar-collapse-1\"]/ul[2]/li/a")
        button.click()

        time.sleep(2)

    def loginInfo(self):
        # username = input("enter your login email: ")
        # password = input("enter your password: ")

        username_input = self.find_element("xpath", "//*[@id=\"login_email\"]")
        username_input.send_keys('espo2003@gmail.com')
        password_input = self.find_element("xpath", "//*[@id=\"login_password\"]")
        password_input.send_keys('Rangers227!golf')

        click_login = self.find_element("xpath", "//*[@id=\"login\"]/div/div[3]/div[1]/button[1]")
        click_login.click()

    def bookProcess(self):
        time.sleep(2)
        publicButton = self.find_element("xpath", "//*[@id=\"content\"]/div/button")
        publicButton.click()

        date = self.find_element("xpath", "//*[@id=\"date-field\"]")

        datetime = "01-29-2024"

        date.click()
        date.send_keys(datetime)
        for i in range(10):
            pyautogui.press('left')
        for i in range(10):
            pyautogui.press('backspace')

    def numPeople(self):
        num = int(input("How many people are playing? "))
        if num == 1:
            one = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[3]/div/div/a[1]")
            one.click()
        elif num == 2:
            two = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[3]/div/div/a[2]")
            two.click()
        elif num == 3:
            three = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[3]/div/div/a[3]")
            three.click()
        else:
            four = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[3]/div/div/a[4]")
            four.click()

    def timeSlot(self):
        time = input("Enter time period (Morning, Midday Evening): ")
        if time == "Morning":
            element = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[4]/div[1]/div[1]/a[1]")
            element.click()
        elif time == "Midday":
            element = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[4]/div[1]/div[1]/a[2]")
            element.click()
        elif time == "Evening":
            element = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[4]/div[1]/div[1]/a[3]")
            element.click()

    def numHoles(self):
        holes = input("Enter the number of holes you want to play (9 or 18): ")
        if holes == 9:
            element = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[4]/div[2]/div/a[1]")
            element.click()
        else:
            element = self.find_element("xpath", "//*[@id=\"nav\"]/div/div[4]/div[2]/div/a[1]")
            element.click()

    def bookTime(self):
        time.sleep(2)
        teetime = self.find_element("xpath", "//*[@id=\"times\"]/div/div[1]")
        teetime.click()
