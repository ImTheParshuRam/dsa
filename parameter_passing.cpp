#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int x,int y)//call by value
{
    int temo;
    temo=x;
    x=y;
    y=temo;
    
}
void swap1(int &x,int &y)//call by reference
{
    int temo;
    temo=x;
    x=y;
    y=temo;
}
// void swap2(int *x,int *y)//call by address
// {
//     int temo;
//     temo=*x;
//     *x=*y;
//     *y=temo;
// }
void swap3(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{	
    int a,b;
    a=19;
    b=34;
    swap(a,b);//call by value
    cout<<a<< " "<<b<<endl;
    swap1(a,b);//call by reference
    cout<<a<<" "<<b<<endl;
    swap3(&a , &b);//call by address
    cout<<a<<" "<<b<<endl;
    return 0;
}