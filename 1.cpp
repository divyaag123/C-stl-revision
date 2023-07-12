#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator_function(int a , int b){
    return a<b;
   }
bool comparator_function2(int a , int b){
    if(a>b)
        return true;
    else
        return false;
}
int main(){
    vector<int> v;
    int n ;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int element;
        cin>>element;
        v.push_back(element);
        cout<<"size "<<v.size();
        cout<<"capacity " <<v.capacity();
        cout<<endl;

    }
    cout<<endl;
    // to insert an element in vector
    v.insert(v.begin() , 15);
    v.insert(v.begin() + 2 , 7);
    v.erase(v.begin());
    v.erase(v.end() - 1);
    v.pop_back();
    cout<<"through iteration"<<endl;

    vector<int> :: iterator k;
    for(k = v.begin() ; k!=v.end() ; k++){
        cout<<*k ;
    }
    cout<<endl;
    cout<<"through for each loop"<<endl;
    for(int element : v)
        cout<<element<<" ";
    cout << "size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
     //sorting in vector
    sort(v.begin() , v.end());
    cout<<"after sorting"<<endl;
    for(int i =0 ; i<v.size() ; i++){
        cout<<v[i];
    }
    cout<<endl;
    // iterator operator 

    vector<int> :: iterator j;
    for(j = v.begin() ; j!=v.end() ; j++){
        cout<<*j ;
    }
    //v.clear();// complete removal of vector
   
   // comparator function
   
   cout<<"sorting using comparator function"<<endl;
   sort(v.begin() , v.end() , comparator_function);
    vector<int> :: iterator i;
    for(i = v.begin() ; i!=v.end() ; i++){
        cout<<*i ;
    }
    cout<<"Sorting in descending order"<<endl;
    sort(v.begin() , v.end() , greater<int>());
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i];
    }
    cout<<endl;
    cout<<"Sorting using comparator function"<<endl;
    sort(v.begin() , v.end() ,comparator_function2);
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i];
    }






    

 
    return 0;


}
