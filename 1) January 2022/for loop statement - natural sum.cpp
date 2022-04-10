#include <iostream>
using namespace std;
// find sum of natural numbers till n 
int main() {
    
   int n;
   cout<<"Enter Number"<<endl;
   cin>>n;
   
   int sum = 0;
   for(int i=1;i<=n;i++){ 
       sum = sum + i;
   }
   
   cout<<sum<<endl;
   return 0;
}
