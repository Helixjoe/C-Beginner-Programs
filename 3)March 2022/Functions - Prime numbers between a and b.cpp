#include <iostream>
#include <cmath>
using namespace std;
// Function to find prime numbers between A and B 


bool isPrime(int num){
 
    for(int k = 2; k<=sqrt(num);k++){
        if(num%k==0){
            return false;
            break;
        }
    }
    
    return true;
}


int main(){
    
    int a,b;
    cin>>a>>b;
    
    for(int i =a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
        
    }
        
  
    
	return 0;
}
