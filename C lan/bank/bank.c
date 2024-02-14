/*
Royal Kids Bank :

Design a Banking App in C that has the following functionalities:-
User can:-
◆OPEN ACCOUNT by username and password of his choice. On Opening account, his initial balance will be ₹ 25,000/-. 
Once he opens account, he can login by re-entering the same username & password.
◆LOGIN is compulsory to perform any task such as withdrawal, deposit or balance check. If the user name or password do 
not match, he can not Login. Once he is logged in, he can do as many transactions as he wants. He needs to Logout after 
he finishes all the transactions
◆DEPOSIT will enable user to deposit amount of money of his choice. His balance should be updated after the task 
completes.
◆WITHDRAW will enable user to withdraw amount of money of his choice. The only condition is that his balance at any 
point can not go less than ₹10,000/-. If this can happen after his withdrawal, your program must not allow that
transaction. His balance should be updated after the task completes.
◆CHECK BALANCE will show the latest updated balance to user.
◆LOGOUT will exit the user from the program
You should use these functions in your program: login(), deposit(), withdraw(), checkBalance()
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int login(char un[30],char pw[30])
{
    char username[30],password[30];
    int x,y;
    printf("\nEnter your username:\n");
    fflush(stdin);
    scanf("%s",&username);
    x=strcmp(un,username);
    printf("\nEnter your password:\n");
    scanf("%s",&password);
    y=strcmp(pw,password);

    if(x==0 && y==0)
    {
        printf("\nLogin Successfully\n");
        return 1;
    }
    else
    {
        printf("\nInvalid username & password\n");
        return 0;
    }

}

int deposit(int balance)
{
    int amount;
    printf("\nEnter the amount to deposit:  ");
    scanf("%d", &amount);

    balance = balance + amount;
    printf("\nDeposit successful. Your Deposit amount is %d",amount);

    return balance;
}

int  withdraw(int balance)
{
    int withamount;
    printf("\nEnter the amount to withdraw: ₹ ");
    scanf("%d", &withamount);

    if((balance - withamount) >=10000)
    {
        printf("\nWithdrawal successful. Your current balance is ₹ %d",withamount);
        balance = balance - withamount;
        return balance;
    }
    else
    {
        printf("\ntransaction failed.");
        printf("\nbalance should be at least 10000.");
         return balance;
    }
    
}

void checkBalance(int checkbln)
{
    printf("\nYour Current balance is %d",checkbln);
}

int main()
{
    int choice,pass,money=25000;
    char username[30],password[30];
    printf("\n---WELCOME TO ROYALBANK---");
    printf("\nOpen account please enter...");
    printf("\nEnter user name:\n");
    gets(username);
    printf("\nEnter password:\n");
    gets(password);
    printf("\nAccount sucess.");
    printf("\nLogin...");
    pass=login(username,password);
    if(pass==1)
    {
        while (1)
        {
           
             printf("\n1...Deposite.");
             printf("\n2...Withdraw");
             printf("\n3...Check Balance");
             printf("\n4...Exit Bank");
             printf("\nEnter your choice:\n");
             scanf("%d",&choice);

              if(choice==1)
              {
                 money=deposit(money);
                 printf("\nBalance=%d",money);
              }

             if(choice==2)
              {
                 money=withdraw(money);
                 printf("\nBalance=%d",money);
              }

              if(choice==3)
              {
                checkBalance(money);
              }

              if(choice==4)
              {
                printf("\nThank you.");
                exit(0);
              }

              if(choice>4 && choice<1)
              {
                    printf("\nERROR");
                    printf("\nInvlid choice.");
              }
    
        }
    }
    return 0;
}
