/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void option9(Node **headPtr,  char* category_Names){
	int i;
	Node *person = find(headPtr);
	
	char name[15];
	//makes sure they want to delte
        printf("are you sure you want to delete %s", person->Student.student_name);
	scanf("%i", &i);

	if(i > 0){
	  //deletes the node
		deleteNode(headPtr, person->Student.student_ID);	
	}else{
		printf("didnt delete");
	}



}

