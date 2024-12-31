
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>
void option3(Node **headPtr,  char* category_Names){
       	printHeader(category_Names); 
	Node* traversePtr = *headPtr;
	
	float c1 = 0;
	float c2=0;
	float c3 =0;
	float c4 = 0;

	int count;
        //loop through whole list
	while(traversePtr != NULL){
	  //add  all of score in catX to cX
		c1 += traversePtr->Student.Cat1.score1+traversePtr->Student.Cat1.score2 + traversePtr->Student.Cat1.score3;
		c2 += traversePtr->Student.Cat2.score1+traversePtr->Student.Cat2.score2 + traversePtr->Student.Cat2.score3;
		c3 += traversePtr->Student.Cat3.score1+traversePtr->Student.Cat3.score2 + traversePtr->Student.Cat3.score3;
		c4 += traversePtr->Student.Cat4.score1+traversePtr->Student.Cat4.score2 + traversePtr->Student.Cat4.score3;
		  
		printStudent(traversePtr);
		printf("\n");
		//traverse and then add to count to get student
                traversePtr = traversePtr->next;
		count++;
        	}	
	//print all of students cumulatives over the ammount of students
	printf("%f \t\t %f \t\t %f \t\t %f", c1/42, c2/42, c3/42, c4/42);
	
}
