#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breath;

};
void area(int length,int breath){
    int area;
    area=length*breath;
    cout<<"area of rectangle"<<endl<<area<<endl;

} 
int main(){
    struct rectangle r1;
    r1.length=10;
    r1.breath=20;
    area(r1.length,r1.breath);
    return 0;
}