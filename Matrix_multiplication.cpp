#include<iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], mul[10][10];
    int r, c;

    cout<<"Enter the number of rows: \n";
    cin>>r;

    cout<<"Enter the number of colooum: \n";
    cin>>c;

    cout<<"Enter the elements of first matrix: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of second matrix: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>b[i][j];
        }
    }

    cout<<"multiplying of the following mati = \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            mul[i][j]=0;
            for(int k=0; k<c; k++){
                mul[i][j] += a[i][j]*b[i][j];
            }
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<" \n";
    }

    return 0;
}
