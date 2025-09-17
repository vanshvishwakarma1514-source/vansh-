#include<stdio.h>
#include<conio.h>
int main() {


      int arr[5]={1,2,3,5,6};
      int target =4;
      for(int i=0;i<5;i++)
      {
        if(arr[i]==target){
            printf("%d",arr[i]);

        }else{
            printf("not found");
        }
      }


       
  getch();
}