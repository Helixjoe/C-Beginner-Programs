#include <iostream>
using namespace std;
// printing all numbers till 100 that are not divisble by 3 
int main() {
    
    for(int i=1;i<100;i++){
        
        if (i%3==0){
            continue;
        }
        cout<<i<<endl;
        
    }
	return 0;
}
