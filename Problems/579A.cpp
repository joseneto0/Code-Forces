#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int cont = 0; 
	while (n > 0){
		if (n%2!=0) cont++;
		n /= 2;
	}
	cout << cont << '\n';
}