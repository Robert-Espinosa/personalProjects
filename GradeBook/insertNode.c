/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void insert(struct Node **nodeHead, struct Node *newNodePtr){
  //setup our traversePtr to first node
	Node *traversePtr = *nodeHead;
	

	if(0){


	}else{
		
	  //if there nothing in the list set next to null and insert node
                if(*nodeHead == NULL) {

			*nodeHead = newNodePtr;
			newNodePtr->next = NULL;
	
		}
		//check to see if the student can fall into place with id
		else if((*nodeHead)->Student.student_ID > newNodePtr->Student.student_ID){


			newNodePtr->next = *nodeHead;
			*nodeHead = newNodePtr;

		}else{
		  //we need to find where to insert student

			Node *priorNode = *nodeHead;
			Node *traversePtr = *nodeHead;
			//keep seaching while our student id is less
			while (traversePtr != NULL && traversePtr->Student.student_ID < newNodePtr->Student.student_ID) {
			  //traverse and set prior node
    				priorNode = traversePtr;
    				traversePtr = traversePtr->next;
			}
			//set our orginal prior to our new studnet 
			//and set our student next to traverse
			newNodePtr->next = traversePtr;
			priorNode->next = newNodePtr;

	       	     }
	}

}



