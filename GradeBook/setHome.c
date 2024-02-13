/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void setHome(Node* person){
  //asks for 3 cat3 scores and sets them
        float h1,h2,h3;
        printf("Enter first Homework Score (use -1 if there is no score) ");
        scanf("%f", &h1);

        printf("Enter second Homework Score (use -1 if there is no score) ");
        scanf("%f", &h2);

        printf("Enter third Homework Score (use -1 if there is no score) ");
        scanf("%f", &h3);

        person->Student.Cat3.score1 = h1;
        person->Student.Cat3.score2 = h2;
        person->Student.Cat3.score3 = h3;


}

