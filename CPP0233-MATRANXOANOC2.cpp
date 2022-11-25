#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int m,n;
		cin >> m >> n;
		int a[m][n];
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				cin >> a[i][j];
			}
		}
		int b[100];
    int i, k = 0, l = 0;
    int z = 0;
    int size = m*n;
    while (k < m && l < n)
    {
        int val;
        for (i = l; i < n; ++i)
        {
            val = a[k][i];
            b[z] = val;
            ++z;
        }
        k++;
        for (i = k; i < m; ++i)
        {
            val = a[i][n-1];
            b[z] = val;
            ++z;
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                val = a[m-1][i];
                b[z] = val;
                ++z;
            }
            m--;
    }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                val = a[i][l];
                b[z] = val;
                ++z;
            }
            l++;
        }
    }
    for (int i=size-1 ; i>=0 ; --i)
    {
        cout<<b[i]<<" ";
    }
    cout << endl;
}
return 0;
}
