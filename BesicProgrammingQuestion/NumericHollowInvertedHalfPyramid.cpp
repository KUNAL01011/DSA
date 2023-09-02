#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number here : ";
    cin>>n;

    for(int row = 0; row < n; row++){
        int num = 1;
        for(int col = 0; col < n-row; col++){
            if(col == 0 || col == n-row-1 || row == 0 || row == n-1){
                num = num + row;
                cout<<num<<" ";
                num++;
            }
            else{
                num = num + row;
                cout<<"  ";
                num++;
            }
        }
        cout<<endl;
    }
return 0;
}