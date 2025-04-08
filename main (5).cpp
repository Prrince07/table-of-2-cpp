#include <iostream>
using namespace std;

int main() {
    int number = 2;

    cout << "Table of 2:\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}