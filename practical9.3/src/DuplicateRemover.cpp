#include "DuplicateRemover.h"
#include <iostream>

using namespace std;

void DuplicateRemover::addElement(int val) {
    uniqueElements.insert(val);
}

void DuplicateRemover::displayUniqueSet() const {
    for (set<int>::const_iterator it = uniqueElements.begin(); it != uniqueElements.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}

vector<int> DuplicateRemover::convertToVector() const {
    vector<int> vec(uniqueElements.begin(), uniqueElements.end());
    return vec;
}

void DuplicateRemover::displayVector(const vector<int>& vec) const {
    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
}
