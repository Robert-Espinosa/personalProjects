/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void option6(Node **headPtr,  char* category_Names){

	int studentID;
        Node* traversePtr;
        traversePtr = *headPtr;
	//ask for student id and store
        printf("enter a Student ID");
        scanf("%i", &studentID);
	printf("hunting for %i", studentID);
	//loop through whole list
	while(traversePtr != NULL){
	  //if we find out student
                if(traversePtr-> Student.student_ID == studentID){
			
			int i,category,score;
			float newScore;
			//check to see they are inserting for right person
			printf("\ninset scores for %s ? enter 1, if yes,Enter 0 if no: " ,traversePtr->Student.student_name);
                        scanf("%i", &i);
			//if they dont want to break
			if(i==0)break;
			printf("which category?\n1)Quizzes\n2)Midterms\n3)Homework\n4)final");
			//check which category
			scanf("%i",&category);
			//check which score
			printf("which Score? \n Enter 1, 2, or 3");
			scanf("%i", &score);
			
			printf("new Score");
                        scanf("%f", &newScore);
			//cahnge all scores of student then print
			changeScore(traversePtr, category, score, newScore);
			printStudent(traversePtr);	
			
                }
		//traverse list
                traversePtr = traversePtr->next;


        }


}



