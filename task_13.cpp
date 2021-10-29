#include <iostream>
using namespace std;
int main(){
    int Sum = 0;
    for (int counter = 100; counter < 201; counter++) {
        if (counter % 17 == 0) {
            Sum += counter;
        }
    }
    cout << Sum;
}
//867
