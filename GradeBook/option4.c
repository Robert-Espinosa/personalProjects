#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void option4(Node **headPtr,  char* category_Names){
	
	Node *person = find(headPtr);
	//set students cumulative grades with their scores
        person->Student.Cat1.Cumulative = calc(person->Student.Cat1.score1,person->Student.Cat1.score2, person->Student.Cat1.score3); 
	
	person->Student.Cat2.Cumulative = calc(person->Student.Cat2.score1,person->Student.Cat2.score2, person->Student.Cat2.score3);
	
	person->Student.Cat3.Cumulative = calc(person->Student.Cat3.score1,person->Student.Cat3.score2, person->Student.Cat3.score3);
	
	person->Student.Cat4.Cumulative = calc(person->Student.Cat4.score1,person->Student.Cat4.score2, person->Student.Cat4.score3);
	//pritns each of the cumulatives grades for student
	printf("Quizzes cumlative: %f\nMidterm Culative: %f\nHomeWork Cumlative %f\nFinal Culative %f\n",  person->Student.Cat1.Cumulative, person->Student.Cat2.Cumulative, person->Student.Cat3.Cumulative, person->Student.Cat4.Cumulative);

}


