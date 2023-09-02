#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter your number here: ";
    cin>>number;

    int n = number/2;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < n - row - 1; col++){
            cout<<"  ";
        }
        for(int col = 0; col < row*2 + 1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout<<"  ";
        }
        for(int col = 0; col < n*2-row*2 -1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }



return 0;
}