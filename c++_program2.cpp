#include<iostream>
using namespace std;

class num
{
    public:
    int value;
    
    virtual void shownum()
    {
        cout<<value;
    }
};

class outhex : public num
{
    void shownum()
    {   char hex_string[20];
        sprintf(hex_string , "%X" , value);
        cout<<hex_string;
    }
};

class outoct : public num 
{    
     void shownum()
    {
        cout<<"%X"<<endl;
    }
};
int main()
{
   num *n1;
   outhex o1; 
   outhex o2;
   n1 = &o1 ;
   n1->shownum();
  
    
};

