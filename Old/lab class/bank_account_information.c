#include<stdio.h>
struct account
{
    char name[100];
    int account_no;
    int balance;
};

int withdraw(int a, int b)
{
    int p;
    printf("Your account balance : ");
    scanf("%d", &p);
    printf("Enter your withwrawl amount :");
    int w;
    scanf("%d", &w);
    printf("Your current balance is : %d", p-w);
    return p-w;
}

int deposit(int a, int b)
{
    int p;
    printf("Your account balance : ");
    scanf("%d", &p);
    printf("Enter your deposit amount :");
    int x;
    scanf("%d", &x);
    printf("Your current balance is : %d", p+x);
    return p+x;
}

int main()
{
    struct account ac;
    print("Enter your name");
    gets(ac.name);
}