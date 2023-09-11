//whether a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is non prime";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Number is prime";
    }
    return 0;
}