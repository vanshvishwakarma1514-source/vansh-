#include<stdio.h>
#include<conio.h>
int main() {
    int n=234;
    int count=0;
    printf("enter a digit:");
    scanf("%d",&n);
    if(n==0)
    {
        count = 1;      
    }
    while(n>0)
    {
        count++;
        n=n/10;

    }
            printf("number of digits:%d",count);

getch();
}