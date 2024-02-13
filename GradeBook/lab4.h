
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
struct Cat_Grade{
	float score1; 
	float score2;
	float score3;
	float Cumulative;
};
struct Data {
	char student_name[40];      
	int student_ID; 
	struct Cat_Grade Cat1; 
	struct Cat_Grade Cat2; 
	struct Cat_Grade Cat3;
	struct Cat_Grade Cat4; 
	float Current_Grade;  
	float Final_Grade;
};



typedef struct Node {  
	struct Data Student;  
	struct Node *next; 
}Node;



float calculateFinal(Node *person);
float calc( float f1, float f2, float f3);
void printCurrentWfinal(float f1, float f2);

void readCat(FILE *file, struct Node *newNode);
Node *find(Node **nodeHeadPtr);

void insert(struct Node **nodeHead, struct Node *newNodePtr);

void printHeader(char *Category_Names);

void printCatScores(float f1, float f2, float f3);

void printStudent(Node *person);


void Option1(Node **headPtr, char* c);
void option2(Node **headPtr, char* c);
void option3(Node **headPtr, char* c);

void option4(Node **headPtr, char* c);
void printRecalc(Node *person);
void option5(Node **headPtr, char* c);
void changeScore(Node* person, int category, int score, float newScore);
void option6(Node **HeadPtr, char* c);
void setQuiz(Node* person);
void setMid(Node* person);
void setHome(Node* person);
void setFinal(Node* person);
void setCum(Node* person);
void setData(FILE* file, Node** head);
Node *printNameId(Node** headPtr);
void option7(Node **headPtr, char* c);
void option8(Node **headPtr, char* c);

void deleteNode(Node **headPtr, int id);
void option9(Node **headPtr, char* c);
void printFile(FILE* file2, Node* traversePtr);
void option10(Node** headPtr, char* categories, char* file);
void runProgram(Node** head, char* categories, char* f );
