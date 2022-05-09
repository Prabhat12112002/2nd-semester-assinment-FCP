#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n;
    int alphabet=65;
    int row;
    char c = 'A';

    cout<<"Enter the number of rows :\n";
    cin>>row;
    cout<<"Here the Alphabet triangle: \n";

    for(int i=0; i<=row; i++){
            alphabet=65;
        for(int j=row; j>i; j--){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<char(alphabet+k)<<" "; 
        }
        cout<<endl;
    }
    getch();
    return 0;
}