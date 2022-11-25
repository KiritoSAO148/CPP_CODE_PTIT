#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		long long sum=0;
		int res=-1;
		for (int i=0; i<n; i++) sum += a[i];
		long long left=0;
		for (int i=0; i,n; i++){
			sum-=a[i];
			if (sum==left){
				res=i+1;
				break;
			}
			left+=a[i];
		}
		cout << res << endl;
	}
	return 0;
}
