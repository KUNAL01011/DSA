#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number Here : ";
    cin>>n;

    for(int row = 0; row < n; row++){
        char ch;
        for(int col = 0; col < row+1; col++){
             ch = 'A' + col;
            cout<<ch;
        }
        for(char alphabate = ch; alphabate > 'A'; ){
            alphabate = alphabate - 1; 
            cout<<alphabate;
        }
        cout<<endl;
    }
return 0;
}