//Write a program to check if a given number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Number is prime"<<endl;
    }
    return 0;
}