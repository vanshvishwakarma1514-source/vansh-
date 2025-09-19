#include<iostream>
using namespace std;
int main()
{
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    int c[6] = {1,2,3,4,5,6};
    int i,j;
    for(int i=0;i<3;i++)
    {
    c[i]= a[i];
}
for(int j=0;j<3;j++)
    {
        c[i] = b[j];

    }for(int i=0;i<6;i++)
    {
        printf("%d",c[j]);
    }
return 0;
}