#include<iostream>
using namespace std;
int *dynamic(int size)
{
    int *ptr;
    ptr=new int(size);
    for (int i = 0; i < size; i++)
    {
        ptr[i]=i+1;
        
    }
    
    return ptr;
    delete ptr;
}
int main()
{	int *p,si=5;
    p=dynamic(si);
    for (int x=0;x<5;x++)
    {
        cout<<p[x]<<endl;
    }


    return 0;
}