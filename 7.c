#include<stdio.h>
#include<conio.h>
int main() {
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d\n",i);
    }
getch();
}