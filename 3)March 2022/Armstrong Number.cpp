#include <iostream>
#include <cmath>
using namespace std;
// Armstrong Number
int main(){
    
    int n;
    cin>>n;
    
    int arm = 0;
    int OG = n;
    while(n>0){
        int lastdigit = n%10;
        arm = arm + pow(lastdigit,3);
        n = n/10;          
    }
    
    if (OG==arm){
    cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
	return 0;
}
