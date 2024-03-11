#include <iostream>
using namespace std;
int main()
         {
          double donut, sandwhich, bagel, burrito;

          char answerType;
          donut = 1.00;
          sandwhich = 3.50;
          bagel = 2.50;
          burrito = 3.50;
          cout<<"Welcome to Junelle's Cafe"<<endl;

          cout<<"Enter a y (yes) or n (no) for every question asked"<<endl;

          cout<<"Would you like tp buy donut for $1.00?"<<endl;
          cin>>answerType;
          if (answerType == 'y')
          {
              cout<<"A donut has been added to your order. Your total is total + double donut"<<endl;
          }
           else if (answerType == 'n')
           {
               cout<<"Your total is"<<"total"<<endl;
           }

           cout<<"Would you like to buy sandwhich for $3.50?:";
           cin>>answerType;
          if (answerType == 'y')
          {
              cout<<"A sandwhich has been added to your order. Your total is total + double donut"<<endl;
          }
            if (answerType == 'n')
           {
               cout<<"Your total is"<<"total"<<endl;
           }

           cout<<"Thank you for visiting Junelle's Cafe"<<endl;
           return 0;
         }
