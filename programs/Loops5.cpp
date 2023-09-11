//Write a program to print all odd numbers till n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    cout<<"Odd numbers till n are: ";
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<",";
    }
    return 0;
}
