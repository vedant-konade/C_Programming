//Print the number in reverse order

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse=0;
    int i=n;
    while(i>0){
        int lastdigit= i%10;
        reverse= reverse*10 + lastdigit;
        i=i/10;
    }
    cout<<"Reverse of "<<n<<" is "<<reverse;
return 0;
}