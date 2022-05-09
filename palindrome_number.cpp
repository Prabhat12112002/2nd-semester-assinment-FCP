#include<iostream>
using namespace std;

int main(){
    int num, reverse_num, temp_num;
    cout<<"Enter the random number to check palindrome number\n";
    cin>>num;

    temp_num = num;
    while (num != 0){
        reverse_num = reverse_num * 10;
        reverse_num= reverse_num + num% 10;
        num = num / 10;
    }
    if(reverse_num==temp_num){
        cout<<"Given number is Palindrome";
    }
    else{
        cout<<"Given number is not Palindrome";

    }
    return 0;
}