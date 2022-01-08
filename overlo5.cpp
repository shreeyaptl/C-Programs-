#include<iostream>//overloading convert unary operator
using namespace std;

class name
{
    int a;

    public:

    name()
    {
        a=0;
    }

    name(int x)
    {
        a=x;
    }

    name operator -()
    {
        name temp;
        temp.a=-a;
        return temp;
    }

    name operator +()
    {
        name temp;
        temp.a=+a;
        return temp;
    }

    void display()
    {
        cout<<"value of a : "<<a<<endl;
    }
};

int main()
{
    name n1(-2);
    name n2(3);
    name n3;
    name n4;

    n3=-n1;
    n4=+n2;

    n3.display();//(-ve) will be converted into positive
    n4.display();//(+ve) will remain positive

    return 0;
}