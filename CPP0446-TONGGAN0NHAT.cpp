#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

void sum (int arr[], int n){
	int e1=-1,e2=-1,min=INT_MAX;
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (abs(arr[i]+arr[j])<min){
				min=abs(arr[i]+arr[j]);
				e1=arr[i];
				e2=arr[j];
			}
		}
	}
	cout << e1+e2 << endl;
}

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
		sum(a,n);
	}
	return 0;
}
