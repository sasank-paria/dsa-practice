// pattern:
// 9 8 7
// 6 5 4
// 3 2 1

#include<iostream>
using namespace std ;

int main(){
    int i=1 , j=1 , n ;
    cout<<"enter a number" <<endl;
    cin>>n;
    int var1=n*n;

    while (i<=n)
    {
        while (j<=n)
        {
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