#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], n, max, min, maxdx = 0, mindx = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	max = 0;
	min = 100;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
			maxdx = i;
		}
		if(a[i] <= min){
			min = a[i];
			mindx = i;
		}
	}
	n -= 1;
	if(maxdx > mindx){
		mindx += 1;
	}
	cout << maxdx+n-mindx << "\n";
	return 0;
}
