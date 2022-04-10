#include<iostream>

using namespace std;

void binTodec(int num){

    int bin = 0;
    int x = 1;
    while(num > 0){
    int dig = num % 10;
    bin += x*dig;
    x *=2;
    num = num / 10;
    }

    cout<<bin;
    
}

int main(){

 int n;
 cin>>n;

 binTodec(n);



    return 0;
}