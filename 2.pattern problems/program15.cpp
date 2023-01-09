// pattern:
// D 
// C D 
// B C D 
// A B C D 

#include<iostream>
using namespace std;

int main(){
     int i=1 , j=1 , n ;
    cout<<"enter a number "<<endl;
    cin>>n;
    int var1 = n;
    while(i<=n){
        
        while(j<=i){
          cout<<(char)(65+var1-1)<<" ";
          j++;
          var1++;
        }
        var1 = n;
        cout<<endl;
        var1=n-i;
        j=1;
        i++;
        
    }
    return 0;
}