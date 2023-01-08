// pattern:
// 123
// 456
// 789

#include<iostream>
using namespace std;

int main(){
    int i=1 ,j=1 , n , var1=1;
    //hint: maintain a variable for print and incrementing.
    cout<<"enter a number"<<endl;
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<var1;
            j++;
            var1++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;
}