#include <iostream>
using namespace std;
// Robot says hello in different languages
int main() {
    
    char Button;
    cout<<"Input a Character"<<endl;
    cin>>Button;
    
    switch(Button){ // input variable in the brackets 
    
    case'a': // the different input
    cout<<"Namaste"<<endl;
    break; //once the statement is executed we need to break out of the switch 
    
    case'b':
    cout<<"Ciao"<<endl;
    break;
    
    case'c':
    cout<<"Hello"<<endl;
    break;
    
    case'd':
    cout<<"Hola"<<endl;
    break;
    
    default:
    cout<<"Need to learn more , I am dubmass robot"<<endl;
    break;
        
    }
    
    
    
        
	return 0;
}
