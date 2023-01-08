//prime number or not
//prime number is a number which is divisible by only 1 .


#include<iostream>
using namespace std;

int main(){
    int num1 , num2=2;
     cout<<"enter a number to find out whether it is a prime number or not " <<endl;
     cin>>num1;
     
     //num1 user input will be divided by num2 cont and if it is divided by any number then for sure it is not
     //a prime number. as simple as that.

    while(num1<num2){
           if(num1%num2==0){
            cout<<"it is not a prime number" <<endl;
           }

              num2++;
    }
    cout<<"it is a prime number " <<endl;

    return 0;
}