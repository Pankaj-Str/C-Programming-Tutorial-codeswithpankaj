// C Preprocessors Exmaple


#include <stdio.h>


// C Preprocessors Example

#define PI 3.14159
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    printf("Value of PI: %f\n", PI);
    printf("Max of 10 and 20: %d\n", MAX(10, 20));
    
    return 0;
}


