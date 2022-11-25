#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double a[n];
	for (auto &x : a) cin >> x;
	double s=0;
	int dem=2;
	sort (a,a+n);
	double min=a[0];
	double max=a[n-1];
	for (int i=1; i<n-1; i++){
		if (a[i]==min || a[i]==max){
			a[i]=0;
		}
	}
	for (int i=0; i<n; i++){
		if (a[i]==0) dem++;
	}
	for (int i=1; i<n-1; i++){
		s+=a[i];
	}
	cout << fixed << setprecision(2) << s/(n-dem);
}
