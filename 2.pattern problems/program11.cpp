// pattern:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
     int i=1 , j=1 , n ;
    cout<<"enter a number "<<endl;
    cin>>n;
    while(i<=n){
        int var1 = i;
        while(j<=i){
            cout<<var1;
            var1--;
            j++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}