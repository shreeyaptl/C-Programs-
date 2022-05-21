#include <iostream>
using namespace std;

void showMenu()
{
    cout<<"**********MENU**********"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. exit"<<endl;

}
int main()

{   int option;
    do{ 
    cout<<" "<<endl;
    showMenu();  
    
    double balance = 500.0;

    cout<<"Choose your option"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:cout<<"Balance is: "<<balance <<"$"<<endl;
        break;
        case 2: cout<<"Deposit amount:";
                double depositAmount;
                cin>>depositAmount;
                
                balance += depositAmount;
            
                cout<<" balance after deposit is "<<balance;
                break;
        
        case 3: cout<<"Withdraw amount:";
                double withdrawAmount;
                cin>>withdrawAmount;
                
                if(withdrawAmount <= balance)
                {
                 balance -= withdrawAmount;
                 cout<<" balance after withdraw is"<<balance;
                }
                else
                {
                cout<<"not enough money"<<endl;
                break;
                }
        
   }
}while (option!=4);
    
    //check balance, deposit, withdraw money, show menu 
    return 0;
}








