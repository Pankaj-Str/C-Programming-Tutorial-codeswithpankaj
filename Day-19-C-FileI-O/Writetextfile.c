#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("p4n.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   // printf("Enter num: ");
   // scanf("%d",&num);

   // fprintf(fptr,"%d",num);
   fprintf(fptr,"welcome to codeswithpankaj.com");
   fclose(fptr);

   return 0;
}