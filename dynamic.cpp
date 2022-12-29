#include<iostream>
using namespace std;
int main()
{	
    int *a;
    int *p;
    p=(int *)malloc(5*sizeof(int));//getting space in heap in c
    a=new int[5];//getting space in c++
    
    a[0]=122;
    a[1]=12;
    a[3]=30;
    a[2]=98;
    a[4]=87;
    cout<<"dynamic memory allocation in c++"<<endl;
    for (int i=0;i<5;i++)
    {
        
        cout<<a[i]<<endl;
    }

    p[0]=122;
    p[1]=12;
    p[3]=30;
    p[2]=98;
    p[4]=87;
    cout<<"dynamic memory allocation in c"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

    delete [] a; //free heap memory in c++
    free(p);//free memory in c
    return 0;
}