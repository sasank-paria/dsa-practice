// pattern:  
// ****
// ****
// ****
// ****

#include<iostream>
using namespace std;

int main(){

     int i=1 ;
     int j=1 ;
     int n;
     cout<<"enter a numbmer of stars wanna print " <<endl;
     cin>>n;

     while(i<=n){

        while(j<=n){
            cout<<"*" ;
            j++;
        }
        cout<<endl;
        i++;
        j=1;
     }


    return 0;
}