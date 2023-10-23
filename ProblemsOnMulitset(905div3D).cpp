/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b % a, a); 
}*/

void solve(){
	int n,x;
	cin>>n>>x;
	int arr[n];
	int count=0;
	for (int i=0;i<n;i++){
		cin>>arr[i];
		if (arr[i]%2==0)count++;
	}
	if (x==2){
		if (count==0)cout<<1<<endl;
		else cout<<0<<endl;
	}
	else if(x==4){
		if (count>=2)cout<<0<<endl;
		else if(count==1){
			for (int i=0;i<n;i++){
				if (arr[i]%x==0){
					cout<<0<<endl;
					return;
				}
			}
			cout<<1<<endl;
		}
		else {
			int minn=INT_MAX;
			for (int i=0;i<n;i++){
				minn=min(minn,x-(arr[i]%x));
			}
			cout<<min(2,minn)<<endl;
		}
	}
	else {
		int minn=INT_MAX;
		for (int i=0;i<n;i++){
			if (arr[i]%x==0){
				minn=0;break;
			}
			else {
				minn=min(minn,x-(arr[i]%x));
			}
		}
		cout<<minn<<endl;
	}
}


int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
