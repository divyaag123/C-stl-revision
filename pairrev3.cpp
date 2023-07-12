#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
bool comaparator_function2(pair<double , pair<int , int>> a, pair<double , pair<int, int>> b){
    if(a.first != b.first){
        if(a.first<b.first)
            return true;
    }
    else
    {
        if(a.second!= b.second)
            if(a.second < b.second)
                return true;
    }
}
bool comparator_function(pair<int , int> a , pair<int , int>b){
    if(a.first!= b.first){
        if(a.first>b.first)
            return true;
        else 
            return false;
    }
    else
    {
        if(a.second>b.second){
            return true;
        }
        else
            return false;
    }
}
int main(){
   // int ar[] = { 1 ,2 ,3, 4, 5};
    //int arr [] = { 6 , 7, 8, 9 , 10};
    //pair<int , int> pair_array2[5];
    //for(int i =0; i <5 ; i++){
      //  pair_array2[i].first = ar[i];
      //  pair_array2[i].second = arr[i];

//    }
  //  for(int i =0 ; i <5 ; i++)
    //    cout<<pair_array2[i].first<<" "<<pair_array2[i].second<<endl;
    


// find the number of pairs that match with the target from the n input pairs
pair<int , int> target_pair;
cin>>target_pair.first>>target_pair.second;
int n ;
cin>>n;
int count =0;
for(int i=0 ; i<n ; i++){
    int a , b ; 
    cin >> a >>b;
    pair<int , int> p = make_pair(a,b);
    if(target_pair == p)
        count++;
    
}
cout<<count;

// ---------------VECTOR OF PAIRS--------------------

int j;
cin>>j;
vector<pair<int , int>>v;
for(int i =0 ; i<j ; i++){
    int x , y;
    cin>>x >>y;
    v.push_back({x,y});

}
for( auto ele : v){
    cout<<ele.first<<" "<<ele.second<<endl;
}
// -----------------SORTING VECTOR OF PAIRS-------------------

sort(v.begin() , v.end());
cout<<"After sorting"<<endl;
for( auto ele : v){
    cout<<ele.first<<" "<<ele.second<<endl;
}

//---------------------SORTING VECTOR OF PAIRS IN DESCENDING ORDER----------------------
sort(v.begin() , v.end() , greater<pair<int , int>>());
cout<<"DECSCENDING ORDER SORTING"<<endl;
for( auto ele : v){
    cout<<ele.first<<" "<<ele.second<<endl;
}
sort(v.begin() , v.end() , comparator_function);
cout<<"DECSCENDING ORDER SORTING using comparator function"<<endl;
for( auto ele : v){
    cout<<ele.first<<" "<<ele.second<<endl;
}

// ------------------------SORTING VECTOR OF PAIRS OF PAIR-------------------------

vector<pair<double ,pair<int , int>>>z;
int f ; 
cin>>f;
for(int i=0 ; i<f ;i++){
    int x , y;
    cin>>x>>y;
    double distance = pow((pow(x , 2) + pow(y , 2)) , 0.5);
    z.push_back(make_pair(distance , make_pair(x,y)));

}
cout<<"Before sorting"<<endl;
for(auto ele : z){
    cout<<ele.first<<" "<<ele.second.first<<" "<<ele.second.second<<endl;

}
sort(z.begin() , z.end());
cout<<" After sorting"<<endl;
for(auto ele : z){
    cout<<ele.first<<" "<<ele.second.first<<" "<<ele.second.second<<endl;

}
sort(z.begin() , z.end(), comaparator_function2);
cout<<" After sorting by uisng comparator function"<<endl;
for(auto ele : z){
    cout<<ele.first<<" "<<ele.second.first<<" "<<ele.second.second<<endl;

}



return 0;


}
