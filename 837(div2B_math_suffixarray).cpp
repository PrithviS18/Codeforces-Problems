/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;


void solve(){
     int n,m;
     cin>>n>>m;
     int arr[n+1];
     for (int i=1;i<=n;i++)arr[i]=n-i;
     for (int i=0;i<m;i++){
     	int a,b;
     	cin>>a>>b;
     	if (a>b)swap(a,b);
     	arr[a]=min(arr[a],b-a-1);
     }
     long long ans=n;
     arr[n]=0;
     for (int i=n-1;i>=1;i--){
     	if (arr[i+1]>=arr[i]-1){
     		ans+=(long long)arr[i];
     	}
     	else{
     		arr[i]=arr[i+1]+1;
     		ans+=(long long)(arr[i+1]+1);
     	}
     }
     cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
