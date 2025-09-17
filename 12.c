#include<stdio.h>
#include<conio.h>

int main() 
{
    int num;
      
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
        printf(" ");
    } for(int k=3;k>=i;k--)
    {
        printf("*");
    }
    for(int p=1;p>=i;p--)
    {
        printf("*");
    }
    
    
    
    printf("\n");
}
getch();
}
