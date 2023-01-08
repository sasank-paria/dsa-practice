// pattern: 

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){
    int i=1 , j=1 , n ;
    cout<<"enter a nubmer upto which wanna pattern"<<endl;
    cin>>n;
    while(i<=n){
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
        j=1;
    }
    return 0;
}