#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        m[ele]++;
    }
    int k,count=0;
    cin>>k;
    for(auto it=m.begin();it!=m.end();it++)
    {
    	
    	if((*it).second==k)
    		count++;
    }
    cout<<count;
    

    	return 0;
}