// pattern:
// * * * *
// * * *
// * * 
// *

#include<iostream>
using namespace std;

int main(){
    int i=1 , j=1 , n;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
         while(j<=n){
           cout<<"*"<<" ";
           j++;
         }
         cout<<endl;
         i++;
         j=i;

    }
    return 0;
}