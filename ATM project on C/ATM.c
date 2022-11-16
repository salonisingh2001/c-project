#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter initial amnt");
    scanf("%f",&x);
    printf("Enter \n c for credit \n d for Debit \n b for Balance\n");
    scanf("\n %c",&ch);
    switch(ch)
    {
        case 'c':
                 printf("Enter credit amount \n");
                 scanf("%f",&y);
                 x=x+y;
                 printf("New amount =%f",x);
                 break;
        case 'd':
                 printf("Enter debit amount \n");
                 scanf("%f",&y);
                 if(x>=y)
                 {
                 x=x-y;
                 printf("New amount =%f",x);
                 }
                 else{
                    printf("Insufficient balance in your account");
                 }
                 break;
        case 'b':
                 printf("Amount in your account= %f",x);
                 break;
        default:
                 printf("Invalid option\n");                  
    }
}