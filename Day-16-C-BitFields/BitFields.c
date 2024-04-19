#include<stdio.h>

// C Program to illustrate the structure without bit field

// A simple representation of the date
struct date {
	unsigned int d;
	unsigned int m;
	unsigned int y;
};

int main()
{
	// printing size of structure
	printf("Size of date is %lu bytes\n",
		sizeof(struct date));
	struct date dt = { 31, 12, 2014 };
	printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
}
