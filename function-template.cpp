#include<iostream>
using namespace std;
//function template
template<class T>     //template declaration
void show(T a, T b)    //function declaration and using class parameters
{
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
};

int  main()
{
    int p=10,q=20;
    char m='w', n='t';
    float r=1.4 , t=3.6;
    show(p,q);   //we can call as many data type through same function
    show(r,t);
    show(m,n);
    return 0;
}