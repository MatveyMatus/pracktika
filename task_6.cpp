#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int year;
	float sumMoney;
	cin >> sumMoney >> year;
	for (int counter = 0; counter < year; counter++) {
		sumMoney = (sumMoney * 103) / 100;
	}
	cout.setf(ios::fixed);
	cout << setprecision(3) << sumMoney;
}
//1200 6
//1432.863