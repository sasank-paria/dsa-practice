// pattern:
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
       int i=1 , n;
       cout<<"enter a number "<<endl;
       cin>>n;

       while(i<=n){
        int j =n;
        while(j!=0){
           cout<<j;
           j=j-1;  
        }
        cout<<endl;
        i++;
        
       }
    return 0;
}