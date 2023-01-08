// pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

int main(){
    int i=1 , j=1 , n;
    cout<<"enter a number"<<endl;
    cin>>n;
    while (i<=n)
    {
        while (j<=i)
        {
            cout<<i <<" " ;
            j++;
        }
        cout<<endl;
        j=1;
        i++;
        
    }
    
    return 0;
}