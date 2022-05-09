#include<iostream>
using namespace std;

int main(){
    int reverse=0;
    int lastdigit;
    int n;

    cout<<"Enter the number :";
    cin>>n;
    // for(int i=0; i<n; i++){
    //     lastdigit=n%10;
    //     reverse= reverse*10 + lastdigit;
    //     n=n/10;
    // }

 // both loops are working we can use one loop
    while(n>0){
        lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse;
    
    return 0;
}

