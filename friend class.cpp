#include<iostream>
using namespace std;
class A {
    
    int a,b;
    public:
    void input()
    {
        cout<<"enter values of a and b";
        cin>>a>>b;
    }
    friend class B;   //friend class declaration
    
};
class B
{    int c;
    public:
    void add(A obj1)      //specifying class a object to access variables of class a 
                          //created obj1 to access variables
    {
        c = obj1.a + obj1.b;    //accessessing objects using object of class a 
        cout<<c<<endl;
    }
    
};
int main()
{  
    A oo;           //declaring object of both class to access function 
    B cc;
    oo.input();
    cc.add(oo);    //declaring object of a in function of class b 
    
    return 0;
}
