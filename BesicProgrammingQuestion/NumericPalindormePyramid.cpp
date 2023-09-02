#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter your number here: ";
    cin>>n;

    for(int row = 0; row < n; row++){
        int num;
        for(int col = 0; col < n - row -1; col++){
            cout<<" ";
        }
        for(int col = 0; col < row+1; col++){
            num = col+1;
            cout<<num;
        }
        
        for(int number = num; number > 1; ){
            number--;
            cout<<number;
        }
        cout<<endl;
    }
return 0;
}