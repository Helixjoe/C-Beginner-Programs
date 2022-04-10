#include<iostream>

int Factorial(int num){
    int fact = 1
    for (int j = 1;j<=num;j++){
        fact = fact * j;
    }

    return fact;
}



int main(){

    int n,r;
    cin>>n>>r;

    int nCr;

    nCr = Factorial(n)/(Factorial(n-r)*Factorial(r));
    cout<<nCr;

    return 0;
}