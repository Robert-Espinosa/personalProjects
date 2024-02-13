#RESPECT TO THIS ASSIGNMENT.
#comments in a Makefile start with sharp
gcc_opt =  -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g -c -D DEBUG

all: lab4.zip lab4

lab4.zip: Makefile  printHeader.c insertNode.c lab4.h lab4main.c readCat.c Option1.c findStudent.c printCatScore.c calcCum.c option2.c option3.c  readStudent.c option4.c option8.c option5.c option6.c option9.c printRecalc.c changeScore.c setQuiz.c setMid.c setHome.c setFinal.c setCum.c printNameID.c deleteNode.c option7.c option10.c readData.c calculateFinal.c printCurrentWfinal.c runProgram.c printFile.c
	zip lab3  Makefile  printHeader.c insertNode.c lab4.h lab4main.c readCat.c  Option1.c findStudent.c  printCatScore.c calcCum.c opton2.c option3.c  readStudent.c option4.c option8.c option5.c option6.c  option9.c printRecalc.c changeScore.c setQuiz.c setMid.c setHome.c setFinal.c setCum.c printNameID.c deleteNode.c option7.c option10.c readData.c calculateFinal.c printCurrentWfinal.c runProgram.c printFile.c


lab4: insertNode.o lab4main.o readCat.o printHeader.o  Option1.o findStudent.o printCatScore.o calcCum.o option2.o option3.o readStudent.o option4.o option8.o option5.o printRecalc.o option6.o changeScore.o setQuiz.o setMid.o setHome.o setFinal.o setCum.o option9.o printNameID.o deleteNode.o option7.o option10.o readData.o calculateFinal.o printCurrentWfinal.o runProgram.o printFile.o
	gcc insertNode.o lab4main.o readCat.o printHeader.o Option1.o findStudent.o printCatScore.o calcCum.o option2.o option3.o readStudent.o option4.o option8.o option5.o option6.o printRecalc.o changeScore.o setQuiz.o setMid.o setHome.o setFinal.o setCum.o option9.o printNameID.o deleteNode.o option7.o option10.o readData.o calculateFinal.o printCurrentWfinal.o runProgram.o printFile.o -o lab4 


lab4.o: lab4main.c lab4.h
	gcc $(gcc_opt) lab4main.c

printCatScore.o: printCatScore.c lab4.h
	gcc $(gcc_opt) printCatScore.c

readData.o: readData.c lab4.h
	gcc $(gcc_opt) readData.c

Option1.o: Option1.c lab4.h
	gcc $(gcc_opt) Option1.c

option2.o: option2.c lab4.h
	gcc $(gcc_opt) option2.c

option3.o: option3.c lab4.h
	gcc $(gcc_opt) option3.c

printCurrentWfinal.o: printCurrentWfinal.c lab4.h
	gcc $(gcc_opt) printCurrentWfinal.c

option4.o: option4.c lab4.h
	gcc $(gcc_opt) option4.c

printRecalc.o: printRecalc.c lab4.h
	gcc $(gcc_opt) printRecalc.c

option5.o: option5.c lab4.h
	gcc $(gcc_opt) option5.c

changeScore.o:changeScore.c lab4.h
	gcc $(gcc_opt) changeScore.c

option6.o: option6.c lab4.h
	gcc $(gcc_opt) option6.c

calculateFinal.o: calculateFinal.c lab4.h
	gcc $(gcc_opt) calculateFinal.c

option7.o: option7.c lab4.h
	gcc $(gcc_opt) option7.c

setQuiz.o: setQuiz.c lab4.h
	gcc $(gcc_opt) setQuiz.c

setMid.o: setMid.c lab4.h
	gcc $(gcc_opt) setMid.c

setHome.o: setHome.c lab4.h
	gcc $(gcc_opt) setHome.c

setFinal.o: setFinal.c lab4.h
	gcc $(gcc_opt) setFinal.c

setCum.o: setCum.c lab4.h
	gcc $(gcc_opt) setCum.c

	
printNameID.o: printNameID.c lab4.h
	gcc $(gcc_opt) printNameID.c


option8.o: option8.c lab4.h
	gcc $(gcc_opt) option8.c

deleteNode.o: deleteNode.c lab4.h 
	gcc $(gcc_opt) deleteNode.c

option9.o: option9.c lab4.h
	gcc $(gcc_opt) option9.c

readStudent.o: readStudent.c lab4.h
	gcc $(gcc_opt) readStudent.c

calcCum.o: calcCum.c lab4.h
	gcc $(gcc_opt) calcCum.c

findStudent.o: findStudent.c lab4.h
	gcc $(gcc_opt) findStudent.c

printHeader.o:printHeader.c lab4.h
	gcc $(gcc_opt)  printHeader.c

insertNode.o: insertNode.c lab4.h
	gcc $(gcc_opt) insertNode.c

readCat.o: readCat.c lab4.h
	gcc $(gcc_opt) readCat.c
printFile.o: printFile.c lab4.h
	gcc $(gcc_opt) printFile.c
option10.o: option10.c lab4.h
	gcc $(gcc_opt) option10.c

runProgram.c: runProgram.c lab4.h
	gcc $(gcc_opt) runProgram.c

clean: 
	rm -rf *.o lab:4 lab4.zip
   

