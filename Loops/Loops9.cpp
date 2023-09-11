//Write a program to check if a number is Armstrong number

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int N=n;
    int sum=0;
    while(n>0){
        int LD=n%10;
        sum+=(LD*LD*LD);
        n=n/10;
    }
    if(sum==N){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Non Armstrong number";
    }
    return 0;
}