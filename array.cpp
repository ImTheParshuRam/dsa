#include<iostream>
using namespace std;
int main()
{	
    int arr[10]={1,2,3,4,5,6,7};
    for (int x : arr)
    {
        cout<<x<<endl;
    }
    return 0;
}