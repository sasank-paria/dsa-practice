// pattern:

//       * 
//     * *
//   * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
    int i=1 , j=1 ,k=1, n;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
         while(j<n){
           cout<<" "<<" ";
           j++;
         }
         while(k<=i){
            cout<<"*"<<" ";
            k++;
         }
         cout<<endl;
         k=1;
         i++;
         j=i;

    }
    return 0;
}