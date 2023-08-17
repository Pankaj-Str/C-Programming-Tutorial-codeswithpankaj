// Array 

#include <stdio.h>

int main() {
    
    int data[3];
    // index start from zero
    data[0] = 909;
    data[1] = 100;
    data[2] = 332;
    
    // access data from arrray ...
    //printf("%d",data[0]); // output 909
    
    for(int a = 0; a < 3;a++){
        printf("%d\n",data[a]);
    }
    

    return 0;
}
