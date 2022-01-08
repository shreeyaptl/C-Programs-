#include<iostream>//overloading binary operator's
using namespace std;

class complex {

    private:

    int real,imag;

    public:
   
   complex()
   {
      real=0;
      imag=0;
   }

    complex(int r,int i)//when obj is declared the value in () will go in this 
    {                   //constructer and r will become real  
        real = r;
        imag = i;
    }

    void print()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    //operator overloading syntax
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};

int main()
{
    complex c1(5,4);
    complex c2(2,5);
    complex c3(1,1);
    complex c4;
   
   //c1++; unary operator cause only needs one thing
   // this is binary operator overloading
   
    c4=c1+c2+c3;//c4 = c1.add(c2+c3);

    c4.print();
    
    return 0;
}