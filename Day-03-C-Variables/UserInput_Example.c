#include <stdio.h>
//www.p4n.in
//www.codeswithpankaj.com
int main(void)
{
  //initialize vars
  char name[20]; 
  int age;
  float height;

  // user input 
  printf("enter your name \n ");
  scanf("%s",&name);
  printf("enter your age \n");
  scanf("%d",&age);
  printf("enter your height \n");
  scanf("%f",&height);
  

  //print the welcome message!
  printf("\n --------output---------- \n");
  printf("Name : %s\n",name);
  printf("Age : %d\n",age);
  printf("Height : %f\n",height);
  printf("\n ------------------------ \n");
}
