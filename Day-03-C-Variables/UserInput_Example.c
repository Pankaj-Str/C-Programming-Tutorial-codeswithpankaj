#include <stdio.h>
//www.p4n.in
//www.codeswithpankaj.com
int main(void)
{
  //initialize vars
  char name[20]; 
  int age;
  float height;

  //prompt user to input first and last name and use scanf() to store those to the initiliazed vars
  printf("Enter your name: \n");
  scanf("%s", &name);
  printf("Enter your Age: \n");
  scanf("%d",&age);
  printf("Enter your height: \n");
  scanf("%f",&height);
  

  //print the welcome message!
  printf("\n --------output---------- \n");
  printf("Name : %s\n",name);
  printf("Age : %d\n",age);
  printf("Height : %f\n",height);
  printf("\n ------------------------ \n");
}
