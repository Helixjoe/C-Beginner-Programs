#include <iostream>
#include <cmath>
using namespace std;
// Function to find Fibonacci Sequence

void Fibo(int num){    
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for(int i = 1; i<=num; i++){
        
       cout<<t1<<endl;
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;
    }
  return;
} 

int main() {
    

    int n;
    cin>>n;
    
    Fibo(n);

	return 0;
}
