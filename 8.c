#include<stdio.h>
#include<conio.h>
int main() {
int i;
    for(i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            //break;
            continue;
        }
        printf("%d\n",i);
}
getch();
}