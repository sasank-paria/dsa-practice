// pattern:
// A B C 
// D E F 
// G H I 

#include<iostream>
using namespace std;

int main(){
     int i=1 , j=1 , n ;
     int var1 = 1;
    cout<<"enter a number "<<endl;
    cin>>n;
    while(i<=n){
        
        while(j<=n){
          cout<<(char)(65+var1-1)<<" ";
          j++;
          var1++;
        }

        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}