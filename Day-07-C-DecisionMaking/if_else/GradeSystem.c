#include<stdio.h>

// Formula	Grade Representation
// IF(per>=90%, “O”,)	Outstanding
// IF(per>=80%, “A”,)	Excellent
// IF(per>=60%, “B”,)	Good
// IF(per>=50%, “C”,)	Satisfactory

int main(){
    printf("Enter your Per ... \n");
    int per;
    scanf("%d", &per);

    if(per >= 100 && per <= 90){
        printf("Outstanding \n");
    }else if (per >= 80 && per < 90)
    {
        printf("Excellent \n");
       
    }else if(per >= 60 && per < 80)
    {
        printf("Good \n");
        
    }else if(per >= 50 && per < 60){
        printf("Satisfactory \n");
    }else{
        printf("Fail \n");
    }
    
    


    return 0;
}