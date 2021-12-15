#include<iostream>
using namespace std;
class Student 
{    
     int m1,m2,m3;
     public:
     void get_marks()
     {
       cout<<"enter marks of three subjects:"<<endl;
       cout<<"marks of first subject:"<<endl;
       cin>>m1;
       cout<<"marks of second subject :"<<endl;
       cin>>m2;
       cout<<"marks of third subject :"<<endl;
       cin>>m3;
    }
     void display_details()
   {   
    cout<<"marks of three subject "<<endl;
    cout<<"subject 1:"<<m1<<endl;
    cout<<"subject 2:"<<m2<<endl;
    cout<<"subject 3:"<<m3<<endl;
   }
     
};


int main()
{   
    
    Student s1;
    s1.get_marks();
    s1.display_details();
    
    return 0;
}
