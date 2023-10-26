/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b % a, a); 
}*/


void solve(){
	long long  n,p,q;
	cin>>n>>p>>q;
	long long  arr[n];
	for (int i=0;i<n;i++)cin>>arr[i];
    if (n==1)cout<<0<<endl;
    else {
    	sort (arr,arr+n);
    	long long maxx=arr[n-1],minn=arr[0],sum=0;
    	int val=min(p+q,n-2),i=1,j=n-2;
    	while (val--){
    		if (abs(arr[i])>abs(arr[j])){
    			sum+=abs(arr[i]);
    			i++;
    		}
    		else {
    			sum+=abs(arr[j]);
    			j--;
    		}
    	}
    	cout<<sum+(maxx-minn)<<endl;
    }
}


int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
