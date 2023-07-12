#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //making a pair
    pair<int , int>p ;
    p.first = 7;
    p.second = 9;
    cout<<p.first<<" " <<p.second;
     pair<int , int>p2 ;
    cout<<"Enter elements of pair2"<<endl;
  
    cin>>p.first>>p.second;
    cout<<p.first<<p.second;
    cout<<endl;
    pair<char , string>p3 ;
    p3 = make_pair('a', "abc");
     cout<<p3.first<<" " <<p3.second;

     //swapping pairs
     pair<int , int>p4 ;
     pair<int , int>p5 ;

     cin>>p4.first>>p4.second;
     cin>>p5.first>>p5.second;
    cout<<"before swaping"<<endl;
    cout<<p4.first<<p.second;
    cout<<p5.first<<p.second;
     swap(p4 , p5);
    cout<<"After Swapping"<<endl;
    cout<<p4.first<<p.second;
    cout<<p5.first<<p.second;
    // comparing elements of pair

    cout<<(p4 < p5)<<endl;
    cout<<(p4 > p5)<<endl;
    cout<<(p4 <= p5)<<endl;
    cout<<(p4 >= p5)<<endl;
    cout<<(p4 ==  p5)<<endl;
    cout<<(p4 != p5)<<endl;

    // to check if two pairs are equal or not
    if(p4 == p5)
        cout<<"Pairs are not equal"<<endl;
    else
        cout<<"Pairs are not equal"<<endl;
    

    // to check if the pairs of pair of character or string 
    // is equal or not

    pair<pair<char, char>, string>pair1 , pair2;
    cin>>pair1.first.first>>pair1.first.second>>pair1.second;
    cout<<pair1.first.first<<pair1.first.second<<pair1.second;
    cin>>pair2.first.first>>pair2.first.second>>pair2.second;
    cout<<pair2.first.first<<pair2.first.second<<pair2.second;
    if(pair1 == pair2)
        cout<<"Pairs are equal";
    else
        cout<<"Pairs are not equal";


    // find the number of pair that match the target pair
    pair<int , int>target_pair;
    cin>>target_pair.first>>target_pair.second;
    int n;
    cin>>n;
    int count =0;
    for(int i= 0 ; i<n ; i++){
        int a, b;
        cin>>a >>b;
        pair<int , int> p = make_pair(a , b);
        if(target_pair == p)
            count++;


    }
    cout<<count;
 

    








     

    

    return 0;

}