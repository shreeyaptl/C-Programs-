#include<iostream>//overloading class member operator(->)
using namespace std;//we cant ude friend funcn to overload this one

class marks
{
    int mark;

    public:

    marks(int x)
    {
        mark=x;
    }

    void put_marks()
    {
        cout<<"Hey i got "<<mark<<" marks"<<endl;
    }

    marks *operator ->()
    {
        return this;
    }
};

int main()
{
    marks m1(12);
    m1.put_marks();
    m1->put_marks();
    return 0;
}

