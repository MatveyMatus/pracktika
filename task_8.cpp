#include <iostream>
using namespace std;
int main() {
	for (int counter = 20; counter < 51; counter++) {
		if (counter % 3 == 0 && counter % 5 != 0) {
			cout << counter << " ";
		}
	}
}
//21 24 27 33 36 39 42 48
