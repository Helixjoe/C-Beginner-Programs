#include <iostream>
using namespace std;
// Half Pyramid
int main() {
	
    int row;
    cin>>row;
    
    for(int i = 1; i<=row ; i++){ // changes the row
        for(int j = 1; j<=row; j++){
            if(j<=row-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        
    }
    
	return 0;
}
