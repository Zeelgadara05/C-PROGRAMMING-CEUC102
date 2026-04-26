#ifndef DUPLICATEREMOVER_H
#define DUPLICATEREMOVER_H

#include <set>
#include <vector>

using namespace std;

class DuplicateRemover {
private:
    set<int> uniqueElements;

public:
    void addElement(int val);
    void displayUniqueSet() const;
    vector<int> convertToVector() const;
    void displayVector(const vector<int>& vec) const;
};

#endif
