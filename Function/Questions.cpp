// Question 1 : Program to print sum using fun

    // #include<iostream>
    // using namespace std;
    // int sum(int n, int b){
    //     return (n+b);
    // }
    // int main(){
    //     int n,c;
    //     cout<<"Enter your number here : ";
    //     cin>>n>>c;
    //     int ans = sum(n,c);
    //     cout<<ans<<endl;
    // return 0;
    // }

// Question 2 : Using return keyword in void data type

    // #include<iostream>
    // using namespace std;

    // void func(int n){
    //     return n;
    // }                          ----------------------> show an error

    // int main(){
    //     cout<<func(3)<<endl;
    // return 0;
    // }

// Question 3 : Program to return maximum of three

    // #include<iostream>
    // using namespace std;

    // int findMaximumNumber(int a, int b, int c){
    //     if(a>b){
    //         if(a>c){
    //             return a;
    //         }
    //         else{
    //             return c;
    //         }
    //     }
    //     else{
    //         if(b>c){
    //             return b;
    //         }
    //         else{
    //             return c;
    //         }
    //     }
    //     return 0;
    // }
    // int main(){

    //     int ans = findMaximumNumber(1,1,1);
    //     cout<<ans<<endl;

    // return 0;
    // }

// Question 4 : Display area of circle

    // #include<iostream>
    // using namespace std;

    // float DisplayAreaOfCircle(int r , float pi = 3.14){
    //     float area = pi*(r*r);
    //     return area;
    // }
    // int main(){
    //     float area = DisplayAreaOfCircle(4);
    //     cout<<area<<endl;
    // return 0;
    // }

// Question 5 : Given Number Even or odd

    // #include<iostream>
    // using namespace std;

    // void EvenOdd(int n){
    //     if(n & 1 == 1){
    //         cout<<"Odd"<<endl;
    //     }
    //     else{
    //         cout<<"Even"<<endl;
    //     }
    // }

    // int main(){
    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;

    //     EvenOdd(n);
    // return 0;
    // }

// Question 6 : find the factorial

    // #include<iostream>
    // using namespace std;

    // int fact(int n){
    //     int ans = 1;
    //     for(int i = 1; i <= n; i++){
    //         ans = ans*i;
    //     }

    //     return ans;
    // }
    // int main(){
    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;
    //     int ans = fact(n);
    //     cout<<ans<<endl;

    // return 0;
    // }

// Question 7 : Print all  Prime Form 1 to N

    // #include<iostream>
    // using namespace std;
    // void PrintPrime(int n){
    //     int flag = 0;
    //     for(int i = 2; i<n; i++){
    //         flag = 0;
    //         for(int j = 2; j<n; j++ ){
    //             if(i != j && i % j == 0){
    //                 flag = 1;
    //             }
    //         }
    //         if(flag == 0){
    //             cout<<i<<endl;
    //         }
    //     }

    // }
    // int main(){
    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;
    //     PrintPrime(n);

    // return 0;
    // }

// Question 8 : Reverse the integer
    //Question link : https://leetcode.com/problems/reverse-integer
    // #include <bits/stdc++.h>
    // using namespace std;

    // int reverse(int x)
    // {
    //     int ans = 0;
    //     bool isNeg = false;

    //     if (x <= INT_MIN)
    //     {
    //         return 0;
    //     }

    //     if (x < 0)
    //     {
    //         isNeg = true;
    //         x = -x;
    //     }

    //     while (x > 0)
    //     {
    //         if (ans > INT_MAX / 10)
    //         {
    //             return 0;
    //         }
    //         int digit = x % 10;
    //         ans = ans * 10 + digit;
    //         x = x / 10;
    //     }

    //     return isNeg ? -ans : ans;
    // }

    // int main()
    // {
    //     int n;
    //     cout << "Enter your number here :";
    //     cin >> n;

    //     int reverseNumber = reverse(n);
    //     cout << reverseNumber << endl;

    //     return 0;
    // }

// Question 9 : Set the kth bit

    // #include<iostream>
    // using namespace std;

    // int setBit(int n , int k){
    //     int mask = 1 << k;
    //     int ans = n | mask;

    //     return ans;
    // }

    // int main(){
    //     int n,k;
    //     cout<<"Enter your numbers here :";
    //     cin>>n>>k;

    //     int ans = setBit(n,k);
    //     cout<<ans<<endl;

    // return 0;
    // }

// Question 10 : convert the temperature

    // #include<iostream>
    // using namespace std;
    // int main(){

    // return 0;
    // }

    // count all set bits

    // #include<iostream>
    // using namespace std;

    // int totalSetBit(int n){
    //     int count = 0;
    //     while(n != 0){
    //         n = n & (n-1);
    //         count++;
    //     }
    //     return count;
    // }

    // int main(){

    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;

    //     int ans  = totalSetBit(n);
    //     cout<<ans<<endl;

    // return 0;
    // }

// Question 11 : create number using digit

    // #include<iostream>
    // using namespace std;

    // int digitToNumber(int n){
    //     int ans = 0;
    //     for(int i = 1; i <= n; i++){
    //         cout<<"Enter the "<<i<<"th digit here :";
    //         cin>>i;
    //         ans = (ans * 10) + i; 
    //     }
    //     return ans;
    // }

    // int main(){
    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;

    //     int ans = digitToNumber(n);
    //     cout<<ans<<endl;

    // return 0;
    // }

// Question 12 : print all digit of an integer

    // #include<iostream>
    // using namespace std;

    // void printDigit(int n){
    //     while(n){
    //         int digit = n % 10;
    //         n = n / 10;
    //         cout<<digit<<endl;
    //     }
    // }

    // int main(){
    //     int n;
    //     cout<<"Enter your number here :";
    //     cin>>n;

    //     printDigit(n);
    // return 0;
    // }

// Question 13 : KM to miles

    // #include<iostream>
    // using namespace std;

    // double kmToMilesConverter(double n){
    //     double ans = n * 0.621371;
    //     return ans;
    // }

    // int main(){
    //     double n;
    //     cout<<"Enter your number here :";
    //     cin>>n;

    //     double ans = kmToMilesConverter(n);
    //     cout<<ans<<" miles"<<endl;
    // return 0;
    // }

// Question 14 : Binary representation of a number

    // #include<iostream>
    // using namespace std;

    // void BinaryConverter(int n){
    //     while (n != 0)
    //     {
    //         int digit = n&1;
    //         cout<<digit<<" ";
    //         n = n >> 1;
    //     }
    // }
    // int main() {
    //     int n,sum=0,factor=1;
    //     cout<<"Enter your number here : ";
    //     cin>>n;
    //     BinaryConverter(n);
    //     return 0;
    // }