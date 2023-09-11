#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number here : ";
    cin>>n;

    int num = 1;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            cout<<num;
            if(col < row){
                cout<<"*";
            }
            num++;
        }
        cout<<endl;
    }
    int start = num - n;
    for(int row = 0; row < n; row++){
        int k = start;
        for(int col = 0; col < n-row; col++){
            cout<<k;
            if(col < n-row-1){
                cout<<"*";
            }
            k++;
        }
        start = start - (n - row - 1);
        cout<<endl;
    }

return 0;
}