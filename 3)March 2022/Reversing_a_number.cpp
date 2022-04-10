#include <iostream>
#include <cmath>
using namespace std;
// Reversing a number
int main(){
    
    int n;
    cin>>n;
    
    int reverse = 0;
    
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse *10 + lastdigit; // adds to the reverse number
        n = n/10;          // removes the last digit
    }
    cout<<reverse<<endl;
    
	return 0;
}
