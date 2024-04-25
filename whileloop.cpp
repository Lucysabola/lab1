#include<iostream>
#include<string>
using namespace std;

int main(){

    int number;
    cout<<"enter number:";
    cin>>number;
     while(true){
        if(number >=5 && number<=10) {
            cout<<"Your number has been accpeted";
        }
        else if(number<10 || number<5){
            cout<<"The value"<<number<<endl<<"you entered is invalid.Please enter number between 5and 10"<<endl;
        }
        else{
            cout<<"Please enter an invalid number";
        }
       

        return 0;
    }
}