/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY. THIS IS THE README FILE FOR LAB 4. */
#include "lab4.h"

void printHeader(char *Category_Names)
{
	printf("\nStudent Name\t   Student ID#\t\t%s\t\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t\tCurrent\tFinal\n",
	Category_Names,(char*)Category_Names+15,(char *)Category_Names+30,(char *)Category_Names+45);
	printf("\t\t\t\t  1       2       3       Cum\t   1       2       3     Cum\t   1       2       3       Cum     1       2       3      Cum\tGrade\tGrade\n");

}

