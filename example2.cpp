#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

 int main(){
     srand(time(NULL));

     int daysUntilExperation = 1 + rand()% 11;

     cout<< daysUntilExperation<<endl;

     switch(daysUntilExperation){

        case 0:
        cout<<"Your subscription has expired"<<endl;
        break;

        case 1:
        cout<<"Your subscrption expires in Renew and save 20% "<<endl;
        break;

        case 2 ... 5:
        cout<<"Your subscription will expire soon."<<daysUntilExperation<< "Renew and save 10%"<<endl;
        break;

        case 6 ... 10:
        cout<<"Your subscription will expire soon"<<endl;
        break;

        default: 
        cout<<"Your subscription is active"<<endl;
        break;

     }
     return 0;


 }