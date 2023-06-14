#include<iostream>
#include<cmath>

using namespace std;

int main() {
	long long int lb, bh, lh;
	cin >> lb >> bh >> lh;
	long long int v2 = 4 * sqrt(lb * bh * lh);
	cout << v2 / lb + v2 / bh + v2 / lh;
}
