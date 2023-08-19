
#include <stdio.h>

int main() {
    
    int data[3][3];

    data[0][0] = 23;
    data[1][0] = 23;
    data[2][0] = 23;

    data[0][1] = 23;
    data[1][1] = 23;
    data[2][1] = 23;

    data[0][2] = 23;
    data[1][2] = 23;
    data[2][2] = 23;

    for(int i = 0; i < 3; i++){

        for(int a = 0; a < 3; a++){

             printf("%d ",data[i][a]);
        }

        printf("\n");
    }
    
    return 0;
}
