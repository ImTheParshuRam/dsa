#include<iostream>
using namespace std;
void edit(int a[])
{
    a[0]=12;
}
int main()
{	
    int a[]={2,4,5,6,7,8};
    edit(a);
    for(int x:a)
    {
        cout<<x<<endl;
    }
    return 0;
}