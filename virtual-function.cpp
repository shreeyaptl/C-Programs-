#include<iostream>
using namespace std;
class base 
{   
    public:
    int x;
    virtual void func()
    {
        
    }
};
class derived1 : public base
{   
    public:
    void func()
    {
        cout<<"derived class 1 function executed"<<endl;
        
    }
};
class derived2 : public  base 
{
    public:
    void func()
    {
        cout<<"derived class 2 function executed"<<endl;
    }
};
int main()
{
      base *b1;
      derived1 d1;
      derived2 d2;
      b1 = &d1;
      b1->func();
      
      b1 = &d2;
      b1->func();
      return 0;
      
}





