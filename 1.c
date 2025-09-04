#include<stdio.h>
#include<conio.h>
int main() {
     // int a = 121
     int num;
        printf("Enter a number\n");
        scanf("%d",&num);
     int res= 0;
     while (num !=0)
     {
        int lastdigit = num %10;
        res = res*10 + lastdigit;
        num = num/10;
        printf("%d\n",res);
     }
getch();
}