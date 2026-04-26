#include <iostream>
#include <vector>
#include "DuplicateRemover.h"

using namespace std;

int main() {
    DuplicateRemover remover;
    int count = 0;

    cout << "Enter the number of integers in the list: ";
    cin >> count;

    cout << "Enter the integers (duplicates are allowed):\n";
    for (int i = 0; i < count; ++i) {
        int val;
        cout << "Element " << (i + 1) << ": ";
        cin >> val;
        remover.addElement(val);
    }

    cout << "\n--- Unique Elements (Sorted by std::set) ---\n";
    remover.displayUniqueSet();

    cout << "\n--- Converting std::set to std::vector... ---\n";
    vector<int> uniqueVec = remover.convertToVector();

    cout << "--- Displaying Elements from the new std::vector ---\n";
    remover.displayVector(uniqueVec);

    return 0;
}
