#include<iostream>
using namespace std;
struct student 
{
    string name;
    int roll_no;
    int age;
    int Class;
};
int main()
{	
    struct student s;
    struct student *p;
    p=(struct student *)malloc(sizeof(struct student));
    s.name="ram";//normal allocation
    s.age=13;
    s.Class=3;
    s.roll_no=13;
    cout<<s.name<<endl<<s.age<<endl<<s.Class<<endl<<s.roll_no<<endl;
    p->name="ajay";//dynamically allocation
    p->age=12;
    p->Class=4;
    p->roll_no=11;
    cout<<p->name<<endl<<p->age<<endl<<p->Class<<endl<<p->roll_no<<endl;
    

    free(p);
    return 0;
}