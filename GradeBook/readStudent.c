/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


void printStudent(Node *person){
  //pritns student nade
        printf("%-18s\t%i\t", person->Student.student_name, person->Student.student_ID);
	//prints cat1 scores then  cumulative     
        printCatScores(person->Student.Cat1.score1, person-> Student.Cat1.score2, person->Student.Cat1.score3);
        printf("%.2f\t", person->Student.Cat1.Cumulative);

	//prints cat2 scores then cumulative
        printCatScores(person->Student.Cat2.score1, person-> Student.Cat2.score2, person->Student.Cat2.score3);
        printf("%.2f\t", person->Student.Cat2.Cumulative);


        printCatScores(person->Student.Cat3.score1, person-> Student.Cat3.score2, person->Student.Cat3.score3);
        printf("%.2f\t", person->Student.Cat3.Cumulative);


        printCatScores(person->Student.Cat4.score1, person-> Student.Cat4.score2, person->Student.Cat4.score3);
        printf("%.2f\t", person->Student.Cat4.Cumulative);
	//prints final two grades current and final
	printCurrentWfinal(person->Student.Current_Grade, person->Student.Final_Grade);
	
}
