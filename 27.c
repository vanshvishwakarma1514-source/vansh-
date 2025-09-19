#include<stdio.h>
#include<conio.h>
int main() {
       int a[5] = {1,2,3,4,5};
       int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[i]>arr[j+1])
            {
                int temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp;
            }
        }
        printf("%d",arr[j])
    }

getch();
}