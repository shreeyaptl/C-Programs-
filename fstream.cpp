#include<iostream>
#include<fstream>
using namespace std;


int main()
{
       ofstream fout;
       char ch;
       long pos;
       fout.open("abc.txt",ios::out);
       cout<<"enter a character"<<endl;
       cin>>ch;
       
       while(ch != 'n')
       {   
           fout<<ch;
           cin>>ch;
         
       } 
       fout.seekp(5);
       pos =  fout.tellp();
        cout<<pos;
       
      
       ifstream fin;
}