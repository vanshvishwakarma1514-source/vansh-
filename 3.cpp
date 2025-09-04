 #include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<<"enter two numbers";
    cin>>x>>y;
    if(x>y)
    {
        cout<<x<< "is greater than y"<<y;
    }
    else if(y>x)
    {
        cout<<y<<" is greater than "<<x;
    }else
    {
        cout<<" both are equal";
    }
    return 0;
}
