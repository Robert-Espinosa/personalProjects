#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"
int main(int argc, char *argv[]){
	
	FILE *file;
	file = fopen(argv[1], "r");		
	printf("reading in information from file %s\n\n", argv[1]);	
	char category_Names[4][15];
	int i;
	for(i = 0; i < 4; i++){
	
		fscanf(file,"%s", *(category_Names+i));
		
	}

	Node *head = NULL;
	readData(file, &head);
	close(file);	

	char* name = argv[2];

	runProgram(&head,  *category_Names, name);
	
	return 0;
}
