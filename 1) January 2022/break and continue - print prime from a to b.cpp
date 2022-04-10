#include <iostream>
using namespace std;
// Check if number is prime or not
int main() {
    
    int a,b;
    cin>>a>>b; //taking input 1 and 2
    
    
    for(int num = a;num<b;num++){ //increments number from a to b
        
        int i; // initialization required so that it can be part of if statement in this loop
        
        for(i=2;i<num;i++){ //acts as the prime checker
            if(num%i==0){ // checks if non prime
                break; // eliminates current number
            }
        }
       
       if(num==i){ // confirms its prime
                cout<<num<<endl; // Output
            } 
    }
        
       
    
        
	return 0;
}
