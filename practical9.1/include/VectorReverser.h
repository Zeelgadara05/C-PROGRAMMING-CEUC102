#ifndef VECTORREVERSER_H
#define VECTORREVERSER_H

#include <vector>

using namespace std;

class VectorReverser {
private:
    vector<int> data;

public:
    void addElement(int val);
    void display() const;
    void reverseUsingSTL();
    void reverseManually();
};

#endif
