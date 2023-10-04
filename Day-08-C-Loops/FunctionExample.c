
#include <stdio.h>

// basic function

void info(){
    printf("codeswithpankaj.com\n");
}

// arg.
void getinfo(int age,float height){
    printf("Your Age : %d\n",age);
    printf("Your height : %f\n",height);
}

// return 
int getno(){
    
    return 800;
}
int main() {
    
    info();
    info();

    // call function 
    getinfo(12,4.5);
    getinfo(32,6.5);
    printf("%d\n",getno());
    return 0;
}
