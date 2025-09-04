#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    if(a%2==0)
    {
        cout<<a<<"is a even number";

    }else if(b%2==0)
    {
        cout<<b<<"is a even number";

    }else if(a%2!=0 && b%2!=0)
    {
      cout<<"both are odd numbers";
    }
    return 0;
    
    

}