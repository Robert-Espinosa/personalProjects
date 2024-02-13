/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void option7(Node **headPtr, char* category_Names){
	Node* traversePtr;
	traversePtr = *headPtr;
	//loop through whole list
	while(traversePtr != NULL){
	  //set student final grade
		traversePtr->Student.Final_Grade = calculateFinal(traversePtr);
		//traverse	
		traversePtr = traversePtr->next;
		

	}
	option3(headPtr,category_Names);

}


