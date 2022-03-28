/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;
template <typename T>      //genral syntax template <typename T> , T = datatype
class weight {
    private:
    T kg;                         //specifying data type of var as T
    
    public:                   
    void get_data(T w1)                  //creating object of 
    {
        kg = w1;
    }
    T display()
    {
        return kg;
    }
};
int main()
{
    weight <int>obj1;                               //T represent datatype 
    obj1.get_data(5);
    cout<<"value is "<<obj1.display()<<endl;
    weight <float>obj2;
    obj2.get_data(4.5);
    cout<<"value is "<<obj2.display()<<endl;
    return 0;
    
}





