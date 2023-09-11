#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number Here : ";
    cin>>n;

    //Break

    // for(int i = 0; i < n; i++){
    //     if(i==3){
    //         break;
    //     }
    //     cout<<"Kunal Kumar"<<i<<endl;
    // }

    //Coutinue
    for(int i = 0; i < n; i++){
        if(i==3){
            continue;
        }
        cout<<"Kunal Kumar "<<i<<endl;
    }
return 0;
}