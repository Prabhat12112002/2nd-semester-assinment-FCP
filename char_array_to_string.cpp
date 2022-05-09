#include<iostream>
using namespace std;

int main(){
    char string[] = {'p', 'r', 'a', 'b', 'h', 'a', 't', 'n'};
    char *ptr = string;

    while(*ptr!='n'){
        cout<<*ptr;
        ptr++;
    }

    // char s[35];
    // cout<<"Enter Your name: \n";
    // gets(s);
    // puts(s);
    // cout<<"Your name is: \n";

    return 0;
}