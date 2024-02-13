/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. *\/ */
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void setFinal(Node* person){
        float f1,f2,f3;
        //asks for each of the 4th category scores and stores them
	printf("Enter first final  Score (use -1 if there is no score) ");
        scanf("%f", &f1);

        printf("Enter second final Score (use -1 if there is no score) ");
        scanf("%f", &f2);

        printf("Enter third final Score (use -1 if there is no score) ");
        scanf("%f", &f3);

        person->Student.Cat4.score1 = f1;
        person->Student.Cat4.score2 = f2;
        person->Student.Cat4.score3 = f3;


}

