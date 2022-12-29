#include<iostream>
using namespace std;
int main()
{	
    int a=12;
    int &e=a;
    cout<<"before increment"<<endl;
    cout<<a<<endl<<e<<endl;
    e++;//increment in reference
    cout<<"after increment"<<endl;
    cout<<a<<endl<<e<<endl;
    int b=34;
    e=b;//passing value
    cout<<"after passing value "<<endl;

    cout<<a<<endl<<e<<endl;
    return 0;
}