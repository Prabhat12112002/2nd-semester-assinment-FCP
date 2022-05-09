#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    int lastdigit;

    cout<<"Enter the number :";
    cin>>n;

    int sum=0;
    int originaln=n;


    // for(int i=0; i<n; i++){
    //     lastdigit=n%10;
    //     sum+= pow(lastdigit, 3);
    //     n=n/10;
    // }

 // both loops are working we can use any loop
    while(n>0){
        lastdigit = n%10;
        sum+= pow(lastdigit, 3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"This is a Armstrong number"<<endl;
    }
    else{
        cout<<"This is not a Armstrong number"<<endl;
    }


    return 0;
}