#include<stdio.h>
#include<conio.h>
int main() {
      int i,j,num=97;
      for(i=0;i<5;i++)
      {
        for(j=0;j>=i;j--)
        {
            printf("%c",num++);
        }
        printf("\n");
      }
getch();
}