#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number \n";
    cin>>n;

    bool flag=0;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<"This is Non-prime number"<<endl;
            flag=1;
            break;
        }
        if(flag==0){
            cout<<"This is a prime number"<<endl;
            // break;      
    // if we use break then sqrt fucntion is optional 
    // if we doesnot use break then we have to add sqrt fucntion and cmath library


        }
    }
    return 0;
}