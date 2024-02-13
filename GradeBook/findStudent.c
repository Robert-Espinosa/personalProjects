
/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


Node *find(Node **nodeHeadPtr){
  //setup our traversePtr to go through linked list
	int studentID;
	Node* traversePtr;
	traversePtr = *nodeHeadPtr;
       	
	printf("enter a Student ID");
	scanf("%i", &studentID);
	//seach through whole list
	while(traversePtr != NULL){
	  //if our student has the same id as one entered return student
		if(traversePtr-> Student.student_ID == studentID){
		
			return traversePtr;
		
		}
		//traverse through list
		traversePtr = traversePtr->next;


	}

	printf("counldnt find studnet");
	return NULL;
}
