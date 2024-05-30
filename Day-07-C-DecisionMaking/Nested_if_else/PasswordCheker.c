#include<stdio.h>

int main(){

    // password checker 

    char pwd[20];
    char c_pwd[20];
    printf("Enter Your Password ");
    scanf("%s",pwd);

    printf("Confirm Your Password ");
    scanf("%s",c_pwd);

    // check both String == 
    int value = strcmp(pwd,c_pwd);

    if(value != 0){
        printf("Password Not Matched \n");
        printf("Try 1/0 More Time \n");
        printf("Confirm Your Password ");
        scanf("%s",c_pwd);
    }else if(value != 0){
        printf("Password Not Matched \n");
        printf("Try 1/1 More Time \n");
        printf("Confirm Your Password ");
        scanf("%s",c_pwd);
    }else if(value != 0){
        printf("Password Not Matched \n");
        printf("Try 0/0 More Time \n");
        printf("Confirm Your Password ");
        scanf("%s",c_pwd);
    }else{
        printf("Password Matched \n");
    }
    
    
   

    

    
        
    


    return 0;
}