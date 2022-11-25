#include<bits/stdc++.h>
using namespace std;
 
long long replaceDig(long long x, long long from, long long to)
{
    long long ketQua = 0;
    long long tich = 1;
 
    while (x > 0)
    {
        long long tmp = x % 10;
         if (tmp == from)
            ketQua = ketQua + to * tich;
 
        else
            ketQua = ketQua + tmp * tich;
 
        tich *= 10;
        x = x / 10;
    }
    return ketQua;
}
 
void MinMaxSum(long long x1, long long x2)
{
    long long minSum = replaceDig(x1, 6, 5) + replaceDig(x2, 6, 5);
 
    long long maxSum = replaceDig(x1, 5, 6) + replaceDig(x2, 5, 6);
    cout << minSum;
    cout << " " << maxSum;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long x1,x2;
		cin >> x1 >> x2;
		MinMaxSum(x1,x2);
		cout << endl;
	}
	return 0;
}


