/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


void Option1(Node **nodeHead,  char* category_Names){
	Node *person = find(nodeHead);
	
	printHeader(category_Names);
	//finds studnet before then prints
	printStudent(person);	
		
}

	
