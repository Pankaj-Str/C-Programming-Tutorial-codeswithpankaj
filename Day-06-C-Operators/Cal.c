#include <stdio.h>


int main()
{
    int n1,n2;
    char opp;
    printf("Enter Opp ...");
    scanf("%c",&opp);
    printf("Enter number 1 ");
    scanf("%d",&n1);
    printf("Enter number 2 ");
    scanf("%d",&n2);
    

    
    int result;
    switch (opp)
    {
    case '+' : result = n1 + n2;
               printf(" Your Result is : - %d \n",result);  
        break;
    case '*' : result = n1 * n2;
               printf(" Your Result is : - %d \n",result);  
        break;
    
    case '-' : result = n1 - n2;
               printf(" Your Result is : - %d \n",result);  
        break;
    
    case '/' : result = n1 / n2;
               printf(" Your Result is : - %d \n",result);  
        break;
    
    
    default: printf("plz enter only + - * / ");
        break;
    } 

    return 0;
}