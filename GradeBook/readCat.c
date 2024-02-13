/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"

void readCat(FILE *file, struct  Node *newNode){

  //reads in 9 floasts 3  at a time storing to corresponding scores
	fscanf(file, "%f %f %f", &newNode->Student.Cat1.score1, &newNode->Student.Cat1.score2, &newNode->Student.Cat1.score3);
	fscanf(file, "%f %f %f", &newNode->Student.Cat2.score1, &newNode->Student.Cat2.score2, &newNode->Student.Cat2.score3);
	fscanf(file, "%f %f %f", &newNode->Student.Cat3.score1, &newNode->Student.Cat3.score2, &newNode->Student.Cat3.score3);
	fscanf(file, "%f %f %f", &newNode->Student.Cat4.score1, &newNode->Student.Cat4.score2, &newNode->Student.Cat4.score3); 

	
	
        //printf("D: %f %f %f", newNode->Student.Cat1.score1, newNode->Student.Cat1.score2, newNode->Student.Cat1.score3);
        //printf("D: %f %f %f", newNode->Student.Cat2.score1, newNode->Student.Cat2.score2, newNode->Student.Cat2.score3);
        //printf("D: %f %f %f", newNode->Student.Cat3.score1, newNode->Student.Cat3.score2, newNode->Student.Cat3.score3);
        //printf("D; %f %f %f\n", newNode->Student.Cat4.score1, newNode->Student.Cat4.score2, newNode->Student.Cat4.score3);

	//sets all the cumulatives after the scores have been set
	newNode->Student.Cat1.Cumulative  =  calc(newNode->Student.Cat1.score1, newNode->Student.Cat1.score2, newNode->Student.Cat1.score3);

	newNode->Student.Cat2.Cumulative  =  calc(newNode->Student.Cat2.score1, newNode->Student.Cat2.score2, newNode->Student.Cat2.score3);
	
	newNode->Student.Cat3.Cumulative  =  calc(newNode->Student.Cat3.score1, newNode->Student.Cat3.score2, newNode->Student.Cat3.score3);

	newNode->Student.Cat4.Cumulative  =  calc(newNode->Student.Cat4.score1, newNode->Student.Cat4.score2, newNode->Student.Cat4.score3);

}
