#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>
void option10(Node** headPtr, char* categories, char* fileName){
        Node* traversePtr;
	traversePtr = *headPtr;

	FILE *file2 = fopen(fileName,"w");
	
	int i = 0;
	//printf("%s", fileName);	
	fprintf(file2,"quizzes midterms homework final\n");
	while(traversePtr != NULL){
		
		printFile(file2, traversePtr);
		traversePtr = traversePtr->next;
		i++;
	}
	printf("a total of %i student records were written to %s\n", i, fileName);
	
	
	fclose(file2);
	exit(1);

}
