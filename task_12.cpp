#include <iostream>
using namespace std;

int main() {
	int multip = 1;
	for (int counter = 10; counter < 100; counter++) {
		if (counter % 2 != 0 && counter % 13 == 0) {
			multip *= counter;
		}
	}
	cout << multip;
}
//2998905