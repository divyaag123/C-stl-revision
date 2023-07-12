#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    pair<int , int>p;
    p.first = 7;
    p.second = 9;
    cout<<p.first<<p.second<<endl;
  

    pair<int , int> p1;
    int a ,b ;
    cin>>a >>b;
    p1 = make_pair(a , b);
    cout<<p1.first<<p1.second<<endl;


    pair<int , int> p2;
    p2 = {2 , 3};
    pair<int , int>p3 = p2;
    p3.first = 8;
    cout<<p3.first<<p3.second<<endl;


    // vector of pair
    vector<pair<int , int>> v(5);
    v.push_back({7,9});
    for(auto ele : v){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    // SWAPPING PAIRS

    pair<int , int> pair1 , pair2;
    cin>>pair1.first>>pair1.second;
    cin>>pair2.first>>pair2.second;
    cout<<"before swapping"<<endl;
    swap(pair1 , pair2);
    cout<<pair1.first<<pair1.second<<endl;
    cout<<pair2.first<<pair2.second<<endl;
    cout<<"After swappping"<<endl;

    // COMAPRISON BETWEEN PAIRS
    cout<<(pair1 > pair2)<<endl;
    cout<<(pair1 < pair2)<<endl;
    cout<<(pair1 <= pair2)<<endl;
    cout<<(pair1 >= pair2)<<endl;
    cout<<(pair1 == pair2)<<endl;
    cout<<(pair1 != pair2)<<endl;

    // TO CHECK IF THE TWO PAIRS ARE EQUAL OR NOT

    if(pair1 ==pair2){
        cout<< " yes they are equal"<<endl;

    }
    else 
        cout<<" Not Equal"<<endl;

    // To check if the pairs of pair of characters or strings are equal or not
   






    return 0;
   
   



}