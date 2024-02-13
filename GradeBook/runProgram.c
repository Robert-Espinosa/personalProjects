/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"


void runProgram(Node **head, char* category_Names, char* f2){
	
	void (*fp_array[6])(Node**, char*);
        fp_array[0] = Option1;
        fp_array[1] = option2;
        fp_array[2] = option3;
        fp_array[3] = option4;
        fp_array[4] = option5;
	fp_array[5] = option6;
	fp_array[6] = option7;
	fp_array[7] = option8;
	fp_array[8] = option9;
	int choice = 0;
        while(1){
                printf("\nPlease enter an option between 1 and 10:\n1)  Print Student Scores by Student ID\n2)  Print Student Scores by Last Name\n3)  Print Student Scores for All Students\n4)  Recalculate Student Scores for a Single Student ID\n5)  Recalculate All Student Scores\n6)  Insert a score for a specific Student ID\n7)  Calculate Final Grades\n8)  Add a new student\n9)  Delete a student\n10) Exit Program\nOption: ");
                scanf("%i", &choice);
                if(choice < 10){
                        fp_array[choice-1](head, category_Names);
                } else{
                        option10(head, category_Names, f2);
                }

        }



}
