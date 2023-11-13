/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
     if (a == 0)
         return b;
     return gcd(b % a, a); 
}*/

void solve(){
	int n;cin>>n;
	long long arr[n];
	for (int i=0;i<n;i++)cin>>arr[i];
	sort (arr,arr+n);
    long long maxx=0;
    for (int i=0;i<n;i++)maxx+=arr[i]-(long long)1;
    long long index=2;
    while (true){
    	long long count=0,val=1;
    	for (int i=0;i<n;i++){
    		count+=abs(arr[i]-val);
    		val*=index;
    		if (count>maxx)break;
    	}
    	if(count<=maxx)maxx=count,index++;
        else break;
    }
    cout<<maxx<<endl;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int t=1;
	//cin>>t;
	while (t--){
		solve();
	}
}
