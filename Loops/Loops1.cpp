//Program to find sum of natural numbers till n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
      sum+=i;
    }
    cout<<sum<<" is the sum of numbers till n.\n";
    return 0;
}
