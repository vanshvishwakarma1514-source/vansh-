#include<stdio.h>
#include<conio.h>
int main() {
    int n = 6;
    int t1 = 0;
    int t2 = 1;
    int next; 
    for(int i = 1; i<=n; i++)
    {
        printf("%d",t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
getch();
}