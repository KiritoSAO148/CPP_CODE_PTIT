#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n >> x;
		int dem=-1;
		int a[n+1];
		for (int i=1; i<=n; i++){
			cin >> a[i];
		}
		for (int i=n; i>=1; i--){
			if (a[i]==x) dem=i;
		}
		cout << dem << endl;
	}
	return 0;
}
