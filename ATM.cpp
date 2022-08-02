#include<iostream>
#include<iomanip>
using namespace std;
void showMenu()
{    cout<<"************************";
     cout<<setw(4)<<"MENU"<<endl;
     cout<<setw(3)<<"1.Deposit"<<endl;
     cout<<setw(3)<<"2.Withdraw"<<endl;
     cout<<setw(3)<<"3.Check Balance"<<endl;
     cout<<setw(3)<<"4.Exit;"<<endl;
     cout<<"*************************";
    
}
int main()
{   int n;
    double bal=0;
    do
{    showMenu();
     cout<<"\n Enter a option"<<endl;
     cin>>n;
     
     switch(n)
     {
        case 1: double depositAmt;
                cout<<"Enter  amount to deposit"<<endl;
                cin>>depositAmt;
                bal+=depositAmt;
                break;

        case 2: double withdramAmt;
                cout<<"Enter amount to withdraw"<<endl;
                cin>>withdramAmt;
                if(withdramAmt<=bal)
                {
                    bal-=withdramAmt;
                } 
                else
                {
                    cout<<"Not enough money "<<endl;
                } 
                break;
        case 3:
                cout<<"Current Balance is "<<bal<<endl;
                break;              
     }
    
} while (n<4);

    return 0;
}
