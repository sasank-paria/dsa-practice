//sum of all even numbers.
#include<iostream>
using namespace std;

int main(){
    int a , b=0 ;
    int i=1;
    int n;
    cout<<"enter a number for addition upto even number" << endl;
    cin>>n;
    while(i<=n){
       a = i%2;
       if(a==0){
        b=b+i;
       }
       i++;
    }
    cout<<"even number's sum is "<<b <<endl;
    return 0;
}