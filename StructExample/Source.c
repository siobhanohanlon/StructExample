#include <stdio.h>

typedef struct person
{
	char name[20], surname[20];
	int age;
}personT;

void main()
{
	struct person p1; //this is done without typedef or personT at end
	personT p2; //This is done with typedef and personT at end
	personT group[5]; //Can make arrays of structs

	//Reading in Person1
	printf("Please Enter Person 1s first name :\t");
	scanf("%s", p1.name); //Dont need & for strings

	printf("\nPlease Enter Person 1s Surname:\t");
	scanf("%s", p1.surname);

	printf("\nPlease Enter Person 1s Age:\t");
	scanf("%d", &p1.age);

	printf("The first name is %s, the surname is %s and the age is %d", p1.name, p1.surname, p1.age);
}