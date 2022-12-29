#include<iostream>
using namespace std;
struct circle
{
    int radius;

};

int main()
{	
    struct circle *p;
    struct circle r;
    p=&r;
    r.radius=78;//normal use of structure
    cout<<r.radius<<endl;
    p->radius=10;//way to show pointer in structure
    cout<<p->radius<<endl;
    (*p).radius=87;//2nd way to show pointer in structure
    cout<<(*p).radius<<endl;
    return 0;
}