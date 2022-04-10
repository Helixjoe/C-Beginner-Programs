#include <iostream>
using namespace std;
// Sum of natural numbers

int sum(int num){
    int sum;
    for(int i = 1;i<=num;i++){
        sum+=i;
    }
    
    return sum;
}


int main(){
    
    int n;
    cin >> n;
    
    cout<< sum(n) << endl;
  
    
	return 0;
}
