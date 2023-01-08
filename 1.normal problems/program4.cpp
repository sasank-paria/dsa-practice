//farenheit to celciuls c = 5/9*(F-32)

#include<iostream>
using namespace std;

int main(){
int f;
double c;
cout<<"enter a farenheit value :" <<endl;
cin>>f;
c = 5.0/9*(f-32);
cout<<"the celsius value of farenheit is :"<< c <<endl;

    return 0;
}