#include <bits/stdc++.h>
using namespace std;
 
string prevNum(string str){
    int len = str.length();
    int index = -1;
    for (int i = len - 2; i >= 0; i--) {
        if (str[i] > str[i+1]){
            index = i;
            break;
        }
    }
    int smallGreatDgt = -1;
    for (int i = len - 1; i > index; i--) {
        if (str[i] < str[index]) {
            if (smallGreatDgt == -1)
                smallGreatDgt = i;
            else if (str[i] >= str[smallGreatDgt])
                smallGreatDgt = i;
        }
    }
    if (index == -1)
        return "-1";
    if (smallGreatDgt != -1){
        swap(str[index], str[smallGreatDgt]);
        return str;
    }
    return "-1";
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		cout << prevNum(s) << endl;
	}
	return 0;
}
