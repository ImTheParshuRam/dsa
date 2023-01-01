#include<iostream>
using namespace std;

int diff(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int main()
{	
    int x,y,z;
    x=12;
    y=2;
    z=diff(x,y);
    cout<<"the difference is "<<z<<endl;
    return 0;
}