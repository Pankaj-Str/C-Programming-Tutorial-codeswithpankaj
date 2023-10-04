#include<stdio.h>

int main(){

    char studentname[20];
    int rollnumber,java,cpp,python,html,css,total,per;
    printf("AVS Public School\n");
    printf("Enter Student Name \n");
    scanf("%s",studentname);
    printf("Enter Student Roll Number \n");
    scanf("%d",&rollnumber);

    printf("Enter JAVA Marks \n");
    scanf("%d",&java);
    printf("Enter c++ Marks \n");
    scanf("%d",&cpp);
    printf("Enter python Marks \n");
    scanf("%d",&python);
    printf("Enter html Marks \n");
    scanf("%d",&html);
    printf("Enter css Marks \n");
    scanf("%d",&css);

    printf("Student Name : %s\n",studentname);
    printf("Student Roll Number : %d\n",rollnumber);
    printf("java : %d\n",java);
    printf("c++ : %d\n",cpp);
    printf("python : %d\n",python);
    printf("HTML %d\n",html);
    printf("CSS : %d\n",css);
    total = java+cpp+python+html+css;
    printf("Total =  %d\n",total);
    per = (total*100)/500;
    printf("PER %d\n",per);



    return 0;
}