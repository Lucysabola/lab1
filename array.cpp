#include<iostream>
#include<string>

using namespace std;

int main(){
    string arr[8]={"b123", "c234", "a345","c15","b177","g3003","c235","b179"};
  

    for (const string& arr:arr){
    if(arr[0]=='b'){
  cout<<arr<< endl;
    }
  
    }


}