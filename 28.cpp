#include<iostream>
using namespace std;
 namespace divya{
    int a =10;
    int sum(int n){
         return n*(n-1)*(2*n+1)/6;
    }
 }
 int sum(int n){
    return n*(n+1)/2;
 }
 int main(){
    int a = 7;
    cout<<a<<" "<<divya::a<<endl;
    cout<<sum(3)<<" "<<divya::sum(3);
    return 0;

 }