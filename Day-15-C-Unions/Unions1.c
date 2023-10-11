// C Program to demonstrate how to use union
#include <stdio.h>

// union template or declaration
union un {
	int member1;
	char member2;
	float member3;
};

// driver code
int main()
{

	// defining a union variable
	union un var1;

	// initializing the union member
	var1.member1 = 15;
    var1.member2 = 'A';

	printf("The value stored in member1 = %d\n",var1.member1);
    printf("The Value Stored in member2 = %c\n",var1.member2);

	return 0;
}
