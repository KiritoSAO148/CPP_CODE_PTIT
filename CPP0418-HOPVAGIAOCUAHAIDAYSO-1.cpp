#include <bits/stdc++.h>
using namespace std;
 
void hop(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            cout << a[i++] << " ";
 
        else if (b[j] < a[i])
            cout << b[j++] << " ";
 
        else {
            cout << b[j++] << " ";
            i++;
        }
    }
	while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
}

void giao(int a[], int b[], int n, int m){
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else 
        {
            cout << b[j] << " ";
            i++;
            j++;
        }
    }
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		for (int i=0; i<m; i++){
			cin >> b[i];
		}
		hop(a,b,n,m);
		cout << endl;
		giao(a,b,n,m);
		cout << endl;
	}
	return 0;
}

