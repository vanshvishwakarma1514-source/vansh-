#include<stdio.h>
#include<conio.h>
int main() {
     int arr[7]={1,3,4,6,5,5,1};
     int k = 7;
     for(int i=0;i<=7;i++)
     {
        for(int j=0;j<7;j++)
        {
        if(arr[i]+ arr[j]==k){
            printf("%d %d",i,j);
            break;
        }
    }
     }
getch();
}