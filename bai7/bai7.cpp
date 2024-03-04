#include<iostream>
using namespace std;
int main() {
	int i = 1, sonhap, giaithua = 1;
	cout << "nhap so ...";
	cin >> sonhap;
	while (i <= sonhap) {
		giaithua = giaithua * i;
		i++;//i=+1;
	}
	cout << "giai thua cua" << sonhap << "la" << giaithua << endl;

	for (int i = 0; i < 81; i++) {
		cout << i << "\n";
	}

	return 0;
}	 