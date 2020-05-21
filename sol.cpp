#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0];
	int min = a[0];
	int maxdx = 0, mindx = 0;
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
	int cnt = 0;
	for(int i = mindx; i < n-1; i++){
		swap(a[i], a[i+1]);
		cnt++;
	} 
	max = 0;
	maxdx = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
			maxdx = i;
		}
	}
	for(int i = maxdx; i > 0; i--){
		swap(a[i], a[i-1]);
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
} 
