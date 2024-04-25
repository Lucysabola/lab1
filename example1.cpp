#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

 int main(){
     srand(time(NULL));

     int daysUntilExperation = 1 + rand()% 11;

     cout<< daysUntilExperation<<endl; 
    
        if(daysUntilExperation <10){
        cout<<"Your subscription expires in 10 days.Renew NOw!!"<<endl;
        }

        else if(daysUntilExperation >=5){
        cout<<"Your subscription expires in "<<daysUntilExperation<<"Renew now and save 10%"<<endl;
    }
     
    if(daysUntilExperation<=1){
        cout<<"Your subscription will expire soon. Renew and save 20%"<<endl;
     }
     else if(daysUntilExperation>10)
     {
      cout<<"Your subscription is active"<<endl;
  
     }
     else if (daysUntilExperation<=0){
       cout<<"Your subscription has expired"<<endl;
     }
     return 0;

 }