#include<iostream>
using namespace std;

int main(){
    int a=0, b=1, n, c;

    cout<<"Enter the limit :\n";
    cin>>n;

    for(int i=1; i<=n; i++){
        a=0; 
        b=1;
        cout<<" "<<b;
        for(int j=1; j<i; j++){
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;

        }
        cout<<endl;
    } 
    return 0;
}