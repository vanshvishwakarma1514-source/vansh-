#include<stdio.h>
#include<conio.h>
int main() {
    int arr[5]={3,12,52,34,5};
    int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<max){
            max = arr[i];
            
        }
        printf("%d\n",max);
    }

getch();
}