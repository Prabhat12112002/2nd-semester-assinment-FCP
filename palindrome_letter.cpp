#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int length, i;
    bool flag=0;
    char string[34];

    cout<<"Enter random string to check Palindrome :\n";
    cin>>string;
    length = strlen(string);
    for(int i = 0; i < length; i++){
       if(string[i] != string[length-i-1]){
          flag = 1;
          break;
       }
    }
    if(flag){
       cout << "Given string is not palindrome";
    }
    else {
       cout << "Given string is palindrome";
    }
    return 0;
}