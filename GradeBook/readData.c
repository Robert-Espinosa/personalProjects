/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"
void readData(FILE* file, Node**head){

        Node *newNodePtr;
	//mallocws the size of one nde and keeps reading in while fscanf == 1
        newNodePtr = (Node*)malloc(sizeof(Node));
        while(fscanf(file, " %[^\n]", newNodePtr->Student.student_name) == 1){
	  //reads in student id
                fscanf(file, "%i", &newNodePtr->Student.student_ID);
		//reads cat grades
                readCat(file, newNodePtr);
		//inserts into list
                insert(head, newNodePtr);
		//malloc nextt node
                newNodePtr = (Node*)malloc(sizeof(Node));


        }




}

