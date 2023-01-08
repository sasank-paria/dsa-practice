//sum from 1 to N.
#include<iostream>
using namespace std;

int main(){

    int a=0;
    int i=0;
    int n;
    cout<<"enter a number for addition upto" << endl; 
    cin>>n;
    while(i<=n){
         a=a+i;
         i++;
         cout<<a <<endl;
    }

    return 0;
}