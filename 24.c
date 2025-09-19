#include<stdio.h>
#include<conio.h>
int main() {
         int a[5] = {-8,2,-3,-1,9};
         int currsum,maxsum=0;
        for(int i=0;i<5;i++)
        {
           currsum=0;
           for(int j=i;j<5;j++)
           {
            currsum= currsum+a[j];
             
           if(currsum>maxsum)
           {
                maxsum = currsum;
           }
        }
        
        }
        printf("%d",maxsum);
getch();
}