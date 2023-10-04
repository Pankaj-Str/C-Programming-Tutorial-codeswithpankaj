//codeswithpankaj.com
#include <stdio.h>

int main() {
    
    printf("Enter Array Size ...");
    int size;
    scanf("%d",&size);
    int data[size];
    
    for(int a = 0; a < size;a++){
        printf("Enter item into array = %d\n",a);
        scanf("%d",&data[a]);
    }
   
    
    
    for(int a = 0; a < size;a++){
        printf("output : - %d\n",data[a]);
    }
    

    return 0;
}
