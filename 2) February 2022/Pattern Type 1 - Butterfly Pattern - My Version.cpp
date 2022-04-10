#include <iostream>
using namespace std;
// Butterfly Pattern
int main() {
	
    int n;
    cin>>n;
    
    int cond;
    cond = 2*n;
    
    for(int i=1;i<=cond;i++){
        for(int j =1;j<=cond;j++){
            if(i>cond/2){
                if(j<=cond-i||j>=i+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(j<=i||j>cond-i ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
	return 0;
}
