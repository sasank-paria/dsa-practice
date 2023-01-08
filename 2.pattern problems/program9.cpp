// pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main(){
    int i=1,j=1 , n ,var=1;
    cout<<"enter a number " <<endl;
    cin>>n;

    while (i<=n)
    {
        while(j<=i){
           cout<<var<<" ";
           var++;
           j++;
        }
        cout<<endl;
        j=1;
        i++;
    }
    return 0;
}