// pattern:
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include<iostream>
using namespace std;

int main(){
    int i=1 , j=1 , n ;
    cout<<"enter a number "<<endl;
    cin>>n;
    while(i<=n){
        int num1 = i;
        while(j<=i){
             cout<<num1<<" ";
             num1++;
             j++;
        }
        cout<<endl;
        j=1;
        i++;
    }

    return 0;
}