#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		int sum=0;
		for (int i=0; i<k; i++){
			sum+=a[i];
		}
		int res=sum,idx=0;
		for (int i=k; i<n; i++){
			sum=sum-a[i-k]+a[i];
			if (sum>res){
				res=sum;
				idx=i-k+1;
			}
		}
		for (int i=0; i<k; i++){
			cout << a[idx+i] << " ";
		}
		cout << endl;
	}
	return 0;
}
