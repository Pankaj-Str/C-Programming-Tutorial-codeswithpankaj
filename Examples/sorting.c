#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[30];
   float percentage;
};
int main(){
   int i;
   struct student record[2];
   // 1st student's record
   record[0].id=1;
   strcpy(record[0].name, "Bhanu");
   record[0].percentage = 86.5;
   // 2nd student's record
   record[1].id=2;
   strcpy(record[1].name, "Priya");
   record[1].percentage = 90.5;
   // 3rd student's record
   record[2].id=3;
   strcpy(record[2].name, "Hari");
   record[2].percentage = 81.5;
   for(i=0; i<3; i++){
      printf(" Records of STUDENT : %d 
", i+1);
      printf(" Id is: %d 
", record[i].id);
      printf(" Name is: %s 
", record[i].name);
      printf(" Percentage is: %f

",record[i].percentage);
   }
   return 0;
}
