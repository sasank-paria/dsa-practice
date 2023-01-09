// pattern:
// A A A 
// B B B 
// C C C


#include<iostream>
using namespace std;

int main(){
     int i=1 , j=1 , n ;
    cout<<"enter a number "<<endl;
    cin>>n;
    while(i<=n){
       
        while(j<=n){
          cout<<(char)(65+i-1)<<" ";
         j++;
        }

        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}