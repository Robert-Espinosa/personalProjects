/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void option8(Node **headPtr, char* category_Names){
	
	Node* student;
	student = printNameId(headPtr);	
	//set all quize grades of stucent
	setQuiz(student);
	//set all midtemr or cat2 grades
	setMid(student);	
	//sets all cat3 grades
	setHome(student);
	//sets all cat4 grades
	setFinal(student);
	//sets all cumulatives
	setCum(student);	
	printHeader(category_Names);
	//instert and prints
	insert(headPtr, student);
	printStudent(student);

}


