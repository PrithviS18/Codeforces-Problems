/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b){
     if (a == 0)
         return b;
     return gcd(b % a, a); 
}*/

void solve(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	bool flag=true;
	for (int i=0;i<n;i++){
	    cin>>arr[i];
	    if (arr[i]>n){
	        flag=false;
	    }
	}
	if (flag){
	    cout<<"Yes"<<endl;
	    return;
	}
	set <int> st;
	int index=n-1;
	flag=true;
	while (k--){
	    if (arr[index]>n){
	        flag=false;
	        cout<<"No"<<endl;
	        break;
	    }
	    if (st.find(index)!=st.end()){
	        break;
	    }
	    st.insert(index);
	    if (arr[index]>index){
	        index=n-(arr[index]-index);
	    }
	    else{
	        index=index-arr[index];
	    }
	}
	if (flag){
	    cout<<"Yes"<<endl;
	    return;
	}
}

 


int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
