#include<iostream>
using namespace std;

int main(){
    int a = 6 , b = 8;
    int temp;

    cout<<"Before swapping \n";
    cout<<"a = "<<a<<", b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping\n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    
    return 0;
}