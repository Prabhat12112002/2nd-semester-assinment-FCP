#include<iostream>
using namespace std;

int main(){
    int n, m;
    int sum=0;

    cout<<"Enter the number: \n";
    cin>>n;
    
    for(int i=0; i<=n; i++){
        m = n%10;
        sum+=m;
        n=n/10; 

    }

    cout<<"Sum is: \n"<<sum;
    return 0;
}