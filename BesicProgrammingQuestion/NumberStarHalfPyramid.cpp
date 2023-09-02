#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number here: ";
    cin>>n;

    for(int row = 0; row < n; row++){
        for(int col = 0; col < row+1; col++){
            if(col == row+1 -1){
                cout<<row+1;
            }
            else{
                cout<<row+1<<" * ";
            }
        }
        cout<<endl;
    }
return 0;
}