#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void option5(Node **headPtr,  char* category_Names){
        Node* person;
        person = *headPtr;
	//loop throguh whole list
        while(person != NULL){

	  //recalcaultes all students cumulatives
        	person->Student.Cat1.Cumulative = calc(person->Student.Cat1.score1,person->Student.Cat1.score2, person->Student.Cat1.score3);

        	person->Student.Cat2.Cumulative = calc(person->Student.Cat2.score1,person->Student.Cat2.score2, person->Student.Cat2.score3);

        	person->Student.Cat3.Cumulative = calc(person->Student.Cat3.score1,person->Student.Cat3.score2, person->Student.Cat3.score3);

        	person->Student.Cat4.Cumulative = calc(person->Student.Cat4.score1,person->Student.Cat4.score2, person->Student.Cat4.score3);
		//prints students with cumulative info
        	printRecalc(person);	
		
	
		person=person->next;
	
	}
}


