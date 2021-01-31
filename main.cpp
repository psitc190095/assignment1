#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
using namespace std;


int i,choice, u_id, quantity;
    float vat_amt=0, balance=0, cash=0,t_amt;
    const float vat = 0.12;
    string f_name;
    string l_name;
    string items[]={"Printer","Phone","Table"};
    int prices[]={100,50,80};

    //Function for display screen
void display()
{
     cout<<"--------WELCOME TO MY SUPERMARKET-------"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;

    cout<<"Dear customer, please enter your first name: ";
    cin>>f_name;
    cout<<endl;
    cout<<"Please enter your last name: ";
    cin>>l_name;
    cout<<endl;
    cout<<"Please enter your unique ID: ";
    cin>>u_id;
    cout<<"\n"<<endl;


    cout<<"----------------------------------------"<<endl;
    cout<<"ITEM"<<setw(15)<<"\tPRICE"<<endl;
    cout<<"----------------------------------------"<<endl;

    for (i=0;i<3;i++){
        cout<<items[i]<<"\t \t"<<prices[i]<<endl;
        }
    cout<<" \n \n \n"<<endl;

    cout<<"Please select an item... \n(NB:0 for Printer, 1 for Phone & 2 for Table: )";
    cin>>choice;

    cout<<"Please enter the quantity being bought:";
    cin>>quantity;
    cout<<"\n"<<endl;

    cout<<"Please the amount of cash you have: ";
    cin>>cash;
}

int main()
{   display();
    //Total cost and VAT amount calculation
    vat_amt = prices[choice] * vat * quantity;
    float t_cost =prices[choice]*quantity;
    t_amt = t_cost + vat_amt;




    //If cash on hand is equal or more than the total cost
    if (cash>=t_amt){
        balance = cash - t_amt;
        system("cls");
        cout<<"**************************"<<endl;
        cout<<" \t INVOICE"<<endl;
        cout<<"**************************"<<endl;
        cout<<"NAME OF CUSTOMER: "<<f_name<<" "<<l_name<<endl;
        cout<<"UNIQUE ID: "<<u_id<<endl;
        cout<<"ITEM BOUGHT: "<<items[choice]<<endl;
        cout<<"QUANTITY BOUGHT: "<<quantity<<endl;
        cout<<"VAT AMOUNT: "<<vat_amt<<endl;
        cout<<"TOTAL COST: "<<t_cost<<endl;
        cout<<"TOTAL AMOUNT: "<<t_amt<<endl;
        cout<<"TOTAL AMOUNT PAID: "<<cash<<endl;
        cout<<"BALANCE: "<<balance<<endl;
        cout<<" \t \t \t"<<endl;
        cout<<"THANK YOU FOR TRANSACTING WITH US!!!"<<endl;}


    //Prompt customer if cash is not up to the total amount
    else if (cash<t_amt){
        cout<<"Dear customer, your cash is insufficient!!!"<<endl;
        
        
    }




    return 0;
}
