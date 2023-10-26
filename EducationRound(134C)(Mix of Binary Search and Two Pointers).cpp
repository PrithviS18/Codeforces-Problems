/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b % a, a); 
}*/


void solve(){
	int n;
	cin>>n;
	int arr[n],brr[n];
	for (int i=0;i<n;i++)cin>>arr[i];
	for (int i=0;i<n;i++)cin>>brr[i];
	int index=0,i=0;
    vector<int> vec(n,-1),vec1(n,-1);
    while (i<n && index<n){
    	int val=upper_bound(arr+index,arr+n,brr[i])-arr-1;
    	for (int j=index;j<=val;j++)vec[j]=brr[i]-arr[j];
    	index=val+1,i++;
    }
    vector<int> v;int val=0;
    for (int i=1;i<n;i++){
    	if(brr[val]<arr[i])v.push_back(val);
    	val++;
    }
    v.push_back(val);
    index=0,i=0;
    while (index<n){
    	vec1[index]=brr[v[i]]-arr[index];
    	if (index==v[i])i++;
    	index++;
    }
    for (auto it:vec)cout<<it<<" ";
    cout<<endl;
    for (auto it:vec1)cout<<it<<" ";
    cout<<endl;
}


int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
