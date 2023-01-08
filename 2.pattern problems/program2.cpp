// pattern:
// 1 1 1
// 2 2 2
// 3 3 3


#include<iostream>
using namespace std;

int main(){
    int n , i=1,j=1;
    cout<<"enter a number to which upto print"<<endl;
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;
}