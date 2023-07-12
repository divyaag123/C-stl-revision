#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    pair<pair<char, char> , string> pair1 , pair2;
    cin>>pair1.first.first>>pair1.first.second>>pair1.second;
    cin>>pair2.first.first>>pair2.first.second>>pair2.second;
    cout<<pair1.first.first<<pair1.first.second<<pair1.second<<endl;
    cout<<pair2.first.first<<pair2.first.second<<pair2.second<<endl;
    if(pair1 == pair2)
        cout<<"PAIRS ARE EQUAL"<<endl;
    else
        cout<<"Pairs are not equal"<<endl;


    // pass by value and pass by reference
    pair<int , string>p1 ={ 10 , "Divya"};
    pair<int , string> &p2 = p1;
    p2.first = 7;
    cout<<p1.first<<p1.second<<endl;
    cout<<p2.first<<p2.second<<endl;


    // Array of pairs

    pair<int ,int> pair_array[3]; // = {{1,2} , {5,4} , {7,8}}
    
    pair_array[0] = {1,2};
    pair_array[1] = {3,4};
    pair_array[2] = {5,6};
    for(auto element : pair_array)
        cout<<element.first<<element.second<<endl;


    
    return 0;

}
