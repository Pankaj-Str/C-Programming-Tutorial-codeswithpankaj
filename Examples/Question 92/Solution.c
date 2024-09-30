// **Question 92:**
//     **Question:** Create a program that simulates a basic ATM machine. The user can withdraw, deposit, or check the balance.
//     **Expected Output:** (Interaction example)
    
//     Welcome to the ATM!
//     Select an option:
//     1. Withdraw
//     2. Deposit
//     3. Check Balance
//     4. Exit
//     Enter your choice: 1
//     Enter the amount to withdraw: 100
//     Successfully withdrawn $100. Current balance: $900

#include<stdio.h>


int s_amount = 1000;
int withdrow_amount = 0;
int deposit_amount = 0;

void withdraw(int amount){
    s_amount = s_amount - amount;
    withdrow_amount = amount;
    printf("amount %d\n",s_amount);
}

void deposit(int d_amount){
    s_amount = s_amount + d_amount;
    deposit_amount = d_amount;
    printf("amount %d\n",s_amount);
}

void Check_Balance(){
    printf("\n Successfully withdrawn %d Deposit balance: %d \n ", withdrow_amount,deposit_amount);
    printf("Current balance %d\n",s_amount);
}



int main(){





int withdraw1,deposit1;







printf("Welcome to the ATM \n Select an option:\n 1. Withdraw \n 2. Deposit \n 3. Check Balance n\n 4. Exit \n");

    printf("Enter your choice: 1\n");

    int choice = 0;

    scanf("%d",&choice);


    switch (choice)
    {
    case 1 : {

        printf("\n Enter Withdraw Amount\n");
        scanf("%d",&withdraw1);
        withdraw(withdraw1);
        Check_Balance();
    
    }
   break;
    
    case 2 : {
            printf("\n Enter Deposite Amount\n");
            scanf("%d",&deposit1);
            deposit(deposit1);
            Check_Balance();
    }
    break;
    case 3 :{
            Check_Balance();

    }
    break;
    
    case 4 : break;
    
    default :{
           printf("Select only 1-4  option\n");
    }
    
    }


    return 0;
}    