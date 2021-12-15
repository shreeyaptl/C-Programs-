#include <iostream>
using namespace std;
class vehicle {
    
  public:
   int mileage;
   string color;
   
  public:
  vehicle(string c , int m)
  {
     c = color;
     m = mileage;
     
  }
};
class Car : public vehicle
{    public:
     int passenger_load; 
     Car(int p)
     {  
        p = passenger_load; 
     } 
    
      
};
 
    
class Truck : public vehicle
{     public:
      int passenger_load; 
      Truck(int p1)
      {
         p1 = passenger_load;
      }
      
      
};
class Sedan : public Car 
{   public:
    string model;
     Sedan(string m)
    {
        m = model;
    }
    
};
int main()
{   
    vehicle v1("red",34);
    Car c1(5);
    Truck t1(2);
    Sedan s1("hx");
    cout<<v1.color<<" "<<v1.mileage<<endl;
    cout<<c1.passenger_load<<endl;
    cout<<t1.passenger_load<<endl;
    cout<<s1.model<<endl;
    
    
    return 0;
}

