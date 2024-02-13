/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

Node *printNameId(Node** headPtr){
        int d;
        char name[50];

        Node* student;
	//allocates enough memory for one student
        student = (Node*)malloc(sizeof(Node));
	//asks for student name and stores it into node
        printf("please enter student Name: ");
        scanf(" %[^\n]", student->Student.student_name);
	//asks for id and then stores to student
        printf("please enter student ID: ");
        scanf("%i", &d);
        student->Student.student_ID = d;
	
        return student;
}


