#include<iostream>
using namespace std;

int OctToDec(int num){
    int sum = 0;
    int x = 1;
    int lastdig;
    while(num>0){
        lastdig = num%10;
        sum = sum + x*lastdig;
        x *= 8;
        num = num /10;
        
    }
    return sum;
}




int main(){
 
    int n;
    cin>>n;

    cout<< OctToDec(n) <<endl;


 return 0;
}