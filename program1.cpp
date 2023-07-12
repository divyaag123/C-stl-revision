#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size"<<v.size();
    v.push_back(1);

    vector<int>a(5,1);
      vector<int> last(a); // to copy all elements of a in last

    cout<<"print a "<<endl;
    
    for(int i:a){    // to traverse through the elements of vector

        cout<<i<<" ";
    }
    cout<<"print last"<<endl;
    for(int i :last){
        cout<<i<<" ";
    }
    cout<<"Capacity"<<a.capacity()<<endl;
    cout<<"size"<<a.size()<<endl;
    a.push_back(2);
    cout<<"Capacity"<<a.capacity()<<endl;
    cout<<"size"<<a.size()<<endl;
    cout<<"front"<<a.front()<<endl;
    cout<<"back"<<a.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i :a){
        cout<<i<<endl;

    }
    //to pop an element from vector
    cout<<"after pop"<<endl;
    a.pop_back();
    for(int i : a){
        cout<<i;
    }



    

}