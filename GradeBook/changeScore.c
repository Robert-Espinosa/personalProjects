
/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */

#include <stdlib.h>
#include <stdio.h>
#include "lab4.h"


void changeScore(Node* traversePtr, int category, int score,float newScore){
                //check which Cat to change score of
		if(category == 1){
                        //check which score to change
			if(score == 1){
                                //use pointer to acess the score and set to new
				traversePtr->Student.Cat1.score1 = newScore;

			}else if(score == 2){
				traversePtr->Student.Cat1.score2 = newScore;

			}else{	
				traversePtr->Student.Cat1.score3 = newScore;

							
			}
		}
                // repeated same for cat 2 3 4
		else if(category == 2){
			 if(score ==1){
				traversePtr->Student.Cat2.score1 = newScore;
	
                        }else if(score ==2){
				traversePtr->Student.Cat2.score2 = newScore;

                        }else{
				traversePtr->Student.Cat2.score3 = newScore;


                        }


		}else if (category ==3){

			 if(score ==1){
				traversePtr->Student.Cat3.score1 = newScore;

                        }else if(score ==2){
				traversePtr->Student.Cat3.score2 = newScore;


                        }else{

				traversePtr->Student.Cat3.score3 = newScore;

                        }


		}else if(category ==4){
			 if(score ==1){
				traversePtr->Student.Cat4.score1 = newScore;

                        }else if(score ==2){
				traversePtr->Student.Cat4.score2 = newScore;


                        }else{
				traversePtr->Student.Cat4.score3 = newScore;
                        }

		
		}


}
