// C Program to create a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// file pointer
	FILE* fptr;

	// creating file using fopen() access mode "w"
	fptr = fopen("p4n.txt", "w");

	// checking if the file is created
	if (fptr == NULL) {
		printf("The file is not opened. The program will exit now");
		exit(0);
	}
	else {
		printf("The file is created Successfully.");
	}

	return 0;
}
