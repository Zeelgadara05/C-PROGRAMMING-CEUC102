#include "VectorReverser.h"
#include <iostream>
#include <algorithm>

using namespace std;

void VectorReverser::addElement(int val) {
    data.push_back(val);
}

void VectorReverser::display() const {
    for (vector<int>::const_iterator it = data.begin(); it != data.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

void VectorReverser::reverseUsingSTL() {
    reverse(data.begin(), data.end());
}

void VectorReverser::reverseManually() {
    if (data.empty()) return;

    vector<int>::iterator left = data.begin();
    vector<int>::iterator right = data.end() - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}
