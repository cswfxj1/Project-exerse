#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	  
	int n;
	cin >> n;
	int num = 0;
	int arr[1001];
	for (int i = 0;i <n;i++) {
		cin >> arr[i];
	}
	for (int j = 0;j < n;j++) {
	bool leftok = false;
    bool rightok = false;
	for (int a = 0;a < j;a++) {
		if (arr[a] < arr[j]) {
		   leftok = true;
		}
	}
	for (int k = j + 1;k < n;k++) {
		if (arr[j] < arr[k]) {
			rightok = true;
		}
	}
	if (rightok && leftok) {
		num++;
	} 
	}
	cout << num<<"\n";

	system("pause");
	return 0;
}