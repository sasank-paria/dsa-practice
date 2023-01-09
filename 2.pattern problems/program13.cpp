// pattern:
// A B C 
// A B C 
// A B C 


#include<iostream>
using namespace std;

int main(){
     int i=1 , j=1 , n ;
    cout<<"enter a number "<<endl;
    cin>>n;
    while(i<=n){
        
        while(j<=n){
          cout<<(char)(65+j-1)<<" ";
          j++;
        }

        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}