/*JOY MAA DURGA*/

#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin>>n;
    if (n&1){
    	cout<<-1<<endl;
    	return;
    }
    long long val=2*n;
    int ind;
    vector<int> arr(33,0),brr(33,0);
    for (int i=0;i<33;i++){
    	if (n&1){
    		arr[i]=1;
    	}
    	else {
    		arr[i]=0;
    	}
    	if (val&1){
    		brr[i]=1;
    	}
    	else{
    		brr[i]=0;
    	}
    	n=(n>>1),val=(val>>1);
    	if (val==0){
    		ind=i;
    		break;
    	}
    }
    int index=1,a=0,b=0,carry=0;
    for (int i=0;i<ind;i++){
    	if (arr[i]==brr[i] && arr[i]==0){
    		if (arr[i+1]!=brr[i+1]){
    			a+=(index);
    			b+=(index);
    		}
    	}
    	else if(arr[i]==brr[i] && arr[i]==1){
    		if ((arr[i+1]!=brr[i+1])){
    			cout<<-1<<endl;
    			return;
    		}
    	}
    	else if(arr[i]==1 && brr[i]==0){
    		if (arr[i+1]==brr[i+1]){
    			cout<<-1<<endl;
    			return;
    		}
    		else {
    			a+=(index);
    		}
    	}
    	else {
    		if (arr[i+1]!=brr[i+1]){
    			a+=(index),b+=(index);
    		}
    	}
    	index*=2;
    }
    cout<<a<<" "<<b<<endl; 
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
