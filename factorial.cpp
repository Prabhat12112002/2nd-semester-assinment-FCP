#include <iostream>  
using namespace std;  
int main(){  

  int i;
  int factorial=1;
  int number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(int i=1; i<=number;i++){    
      factorial*=i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<factorial<<endl;  
  return 0;  
}