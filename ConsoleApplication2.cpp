#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (c * 2 > a or c * 2 > b)
		cout << "NO";
	else
		cout << "YES";
}