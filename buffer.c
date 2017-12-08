#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char name[5] = "";
	char lastname[10] ="";

	printf("Enter your name: ");
	scanf("%s", name);

	printf("My name is %s \n", name);
	printf("And my last name is %s \n", lastname);

	if(strcmp(lastname,"")) abort();

	return 0;
}