#include<iostream>
using namespace std;

class student 
{
    public:
    int roll_no;
    
    public:
    void get_number()
    {
        cout<<"enter roll no of student :"<<endl;
        cin>>roll_no;
    }
    
    public:
    void put_number()
    {
        cout<<"roll no of student is :"<<roll_no<<endl;
    }
};

class test : public student
{   public:
    int subject1;
    int subject2;
    
    void get_marks(){
        cout<<"enter marks of subject1 :"<<endl;
        cin>>subject1;
        cout<<"enter marks of subject2 :"<<endl;
        cin>>subject2;
        
    }
    
    void display_marks(){
        cout<<"The marks of student are :"<<subject1<<" and "<<subject2<<endl;;
    }
    
    int total()
    {
        int total = subject1 + subject2;
        return total;
    }
    
    
};

class result : public test 
{   public:
    int total_marks;
    
    void display()
    {  
         total_marks = total() ;
        cout<<"total marks are "<<total_marks<<endl;
      
    }  
    
};
int main()
{   
    
    
    test t1;
    result r1;
    r1.get_number();
    r1.put_number();
    r1.get_marks();
    r1.display_marks();
    r1.display();
    
    
    
}
