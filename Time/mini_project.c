#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s;
    int d=1000;//we add a delay of 1000 milisec and we will use it in the function sleep
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
      printf("ERROR ! \n");
      exit(0);
    }
    while(1)//this is an infinite loop and anything inside it will repeat itself infinite times
    {    s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n  Clock :");
        printf("\n %0.2d:%0.2d:%0.2d",h,m,s);//writes time in format
        Sleep(d);
        system("cls");
        
    }
}