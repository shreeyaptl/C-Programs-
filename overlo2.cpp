#include<iostream>//overloading unary operator's
using namespace std;

class weight
{
    private:

    int kg;

    public:

    weight()
    {
        kg=0;
    }

    weight(int x)
    {
        kg=x;
    }

    void print()
    {
        cout<<"Weight in KG : "<<kg<<endl;
    }

    weight operator ++()
    {
        weight temp;
        temp.kg=++kg;
        return temp;
    }

    weight operator ++(int x)
    {
        weight temp;
        temp.kg=kg++;
        return temp;
    }

    weight operator --()
    {
        weight temp;
        temp.kg=--kg;
        return temp;
    }

    weight operator --(int x)
    {
        weight temp;
        temp.kg=kg--;
        return temp;
    }
};

int main()
{
   weight obj;
    obj.print();
    ++obj;//obj.operator++()
    obj.print();
    obj++;//obj.operator++(int x)
    obj.print();
    --obj;
    obj.print();
    obj--;
    obj.print();

    weight obj1,obj2;
    obj2=++obj1;
    
    obj2.print();

    return 0;
}