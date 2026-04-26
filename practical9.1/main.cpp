#include <iostream>
#include "VectorReverser.h"

using namespace std;

int main() {
    VectorReverser vr;
    int count = 0;

    cout << "Enter the number of integers: ";
    cin >> count;

    for (int i = 0; i < count; ++i) {
        int val;
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> val;
        vr.addElement(val);
    }

    cout << "\nOriginal Vector:\n";
    vr.display();

    vr.reverseUsingSTL();
    cout << "\nReversed using std::reverse:\n";
    vr.display();

    vr.reverseManually();
    cout << "\nReversed back manually using iterators:\n";
    vr.display();

    return 0;
}
