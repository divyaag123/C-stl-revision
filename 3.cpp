#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

pair<pair<char, char>, string>pair1 , pair2;
    cin>>pair1.first.first>>pair1.first.second>>pair1.second;
    cout<<pair1.first.first<<pair1.first.second<<pair1.second;
    cin>>pair2.first.first>>pair2.first.second>>pair2.second;
    cout<<pair2.first.first<<pair2.first.second<<pair2.second;
    if(pair1 == pair2)
        cout<<"Pairs are equal";
    else
        cout<<"Pairs are not equal";

 return 0;
}