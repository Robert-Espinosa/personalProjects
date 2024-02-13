/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void setMid(Node* person){
  //asks for 3 of the cat2 scores and stores trhem
        float m1,m2,m3;
        printf("Enter first midterm Score (use -1 if there is no score) ");
        scanf("%f", &m1);

        printf("Enter second midterm Score (use -1 if there is no score) ");
        scanf("%f", &m2);

        printf("Enter third midterm Score (use -1 if there is no score) ");
        scanf("%f", &m3);

        person->Student.Cat2.score1 = m1;
        person->Student.Cat2.score2 = m2;
        person->Student.Cat2.score3 = m3;


}










