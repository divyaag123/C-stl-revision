#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// in comparator function we always pass elements 
bool comparator_function(int a , int b){
    if(a<b)
        return true;
    else 
        return false;
}
// or comparator_function for vectors can be created
//by umodifying it as
/*bool comaparator_function(int a , int b){
    return a<b;

}*/
bool comparator_function2(int a , int b){
    return a>b;
}
void print_vector(vector<int>v){
    for(auto ele : v){
        cout<<ele<<" ";
    }
}
int main(){
    //taking elements of vector from user
    int n ; // no. of elements 
    cin>>n; 
    vector<int> v;
    for(int i =0 ; i<n ; i++){
        int element;
        cin>>element;
        
        v.push_back(element);

    }
    print_vector(v);
    // vectors with same elements
    vector<int> v1(5 , 2) ;
    cout<< "vector size"<<v1.size()<<endl;
    print_vector(v1);
    // copy of vectors
    vector<int> v2 = v;
    v2.push_back(6);
    cout<<" Copy of vector v"<<endl;
    print_vector(v2);
    cout<<endl;
    

    // sorting of vectors in ASCENDING ORDER


    
    cout<<"Vector before Sorting"<<endl;
    print_vector(v);
    //sort(v.begin() , v.end());
    cout<<" Vector after sorting"<<endl;
    print_vector(v);


    // sorting using comparartor function

    cout<< " Sorting Using Conparator_Function"<<endl;
    sort(v.begin() , v.end() , comparator_function);
    for(auto ele : v)
        cout<<ele<<endl;
    

    // Sorting in Descending Order

    sort(v.begin() , v.end() , greater<int>());
    print_vector(v);

    // Sorting in DESCENDING ORDER USING COMPARATOR_FUNCTION

    sort(v.begin() , v.end() , comparator_function2);
    cout<<"Sorting in descending order using comparator function"<<endl;
    print_vector(v);





    

    
return 0;

}