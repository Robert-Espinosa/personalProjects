

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void deleteNode(Node** headPtr, int ID) {

    Node* priorNode = NULL;
    Node* traversePtr = *headPtr;
    //if the head is our id
    if (traversePtr != NULL && traversePtr->Student.student_ID == ID) {
      //set our headPtr to the next node of our traverse and free the mem.
        *headPtr = traversePtr->next;
        printf("student ID number %i, %s  has been deleted. ",ID, traversePtr->Student.student_name);
	free(traversePtr);
        return;
    }
    //keep traversing if we arent at our student
    while (traversePtr != NULL && traversePtr->Student.student_ID != ID) {
        
        priorNode = traversePtr;
        traversePtr = traversePtr->next;
    }
    //if we found a vaild student
    if (traversePtr != NULL) {
      //set our node before the traverse to the node after traverse 
        priorNode->next = traversePtr->next;
	printf("student ID number %i, %s  has been deleted. ",ID, traversePtr->Student.student_name);
	//free student mem
	free(traversePtr);
    } else {
        printf("Student with ID %d not found.\n", ID);
    }

}
