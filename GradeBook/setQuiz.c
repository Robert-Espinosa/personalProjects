/**BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include "lab4.h"
#include <stdlib.h>
#include <stdio.h>

void setQuiz(Node* person){
  //asks for 3 cat1 scores and stores them
  float q1,q2,q3;
	printf("Enter first quizzes Score (use -1 if there is no score) ");
        scanf("%f", &q1);

        printf("Enter second quizzes Score (use -1 if there is no score) ");
        scanf("%f", &q2);

        printf("Enter third quizzes Score (use -1 if there is no score) ");
        scanf("%f", &q3);
	
	person->Student.Cat1.score1 = q1;
	person->Student.Cat1.score2 = q2;
	person->Student.Cat1.score3 = q3;


}
