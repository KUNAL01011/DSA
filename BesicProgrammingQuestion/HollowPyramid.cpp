#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number here : ";
    cin>>n;

    for(int row = 0; row < n; row++){
        for(int space = 0; space < n - row - 1; space++){
            cout<<"  ";
        }
        for(int star = 0; star < row*2 +1; star++){
            if(star == 0 || star == row*2 + 1 -1 || row == n-1 || row == 0){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
return 0;
}