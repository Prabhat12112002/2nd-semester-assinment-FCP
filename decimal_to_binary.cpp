#include<iostream>
using namespace std;

void decimalTobinary(int n){
    int binaryNum[50];
    int i;

    while(n>0){
        binaryNum[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        cout<<binaryNum[j];
    }
}


int main(){
    int n = 17;
    // cout<<"The binary number is:\n"
    decimalTobinary(n);
    
    return 0;
}