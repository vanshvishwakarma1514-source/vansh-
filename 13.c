#include<stdio.h>
#include<conio.h>
int main() {
    int t;
      for(int i=0;i<=3;i++)
      {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        for(int p=3;p>t;p--)
        {
            printf(" ");
        } for(int k=1;k>=t;k--)
        {
            printf(" ");
        }
      }for(int q=0;q<=3;q++)
      {
        for(int r=0;r>q;r--)
        {
            printf("*");
        }
        printf("\n");
      }
getch();
}