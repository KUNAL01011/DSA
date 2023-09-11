#include<iostream>
using namespace std;

void bin(int n){
    if(n > 1){
        bin(n/2);
    }
    cout<<n%2;
}
void functio(int &num, int pos) {
    num = num | (1<<pos);
}
int main(){
    // // int n ;
    // // cin>>n;

    // // bin(n);

    // // cout<<((-1^2) < 0)<<endl;
    // // cout<<(1<<2)<<endl;
    // cout<<(functio(2,3));

    // if(~0 == 1) cout<<("yes");
    // else return "yes";\
    
    // int x = -5;
    // x = x>>1;
    // cout<<x;
    int x = 10;
    char y = 'a';
    cout<<x+y<<endl;

return 0;
}