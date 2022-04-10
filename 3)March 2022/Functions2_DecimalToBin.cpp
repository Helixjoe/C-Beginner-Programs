#include<iostream>
using namespace std;

void DectoBin(int num){
    int dig;
    int bin = 0;
    while(num>1){
        num = num/2;
        cout<<num<<endl;
        dig = num%2;
        bin = bin *10 + dig;
        cout<<bin<<endl;
    }
    
   
}


int main(){
    int n;
    cin>>n;

    DectoBin(n);
}