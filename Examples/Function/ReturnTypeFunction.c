# include<stdio.h>


int get_no(){
    int num = 300;
    return num;
}

char get_char(){
    char ch = 'a';
    return ch;
}




int main(){


    int number1 =  get_no();
    char ch = get_char();
    printf("%d\n",number1);
    printf("%c\n",ch);


    return 0;
}