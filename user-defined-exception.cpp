#include<iostream>
#include<exception>
using namespace std;

class myException : public exception              //syntax: struct exception_name : public exception
{
    virtual const char* what() const throw() {     //const char * function_name ()


        return "user defined exception";
    }
};

int main()
{
    myException e;
    try 
    {
        throw e;
    }
    catch(exception& ex )            //catch(exception_name& e)
    {
        cout<<ex.what();             // function_call();
    }
    return 0;
}