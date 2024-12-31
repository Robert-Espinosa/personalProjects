#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


void Option1(Node **nodeHead,  char* category_Names){
	Node *person = find(nodeHead);
	
	printHeader(category_Names);
	//finds studnet before then prints
	printStudent(person);	
		
}

	
