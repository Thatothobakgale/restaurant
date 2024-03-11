#include <iostream>
using namespace std;
int main()
{
    char answerType;
    double donut, tea;

    donut = 1.00
    tea = 2.00

    cout<<"Welcome to Decent's coffee shop."<<endl;
    cout<<"Enter a y(yes) or n(no)."<<endl;

    cout<<"Would you like to add a donut to your order?"<<endl;
    cin>>answerType;

    if(answerType == 'y')
    {
        cout<<"A donut has been added to your order. Your total is total + donut"<<endl;
    }
    else if(answerType == 'n')
    {
        cout<<"No order has been added."<<endl;
    }

    cout<<"Would you like to add a tea to your order?"<<endl;
    cin>>answerType;

    if(answerType == 'y')
    {
        cout<<"A tea has been added to your order. Your total is total + tea"<<endl;
    }
    else if(answerType == 'n')
    {
        cout<<"No order has been added."<<endl;
    }
    cout<<"Thank you for visiting Decent's coffee shop....Enjoy"<<endl;
    return 0;
}
