#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H

#include <string>

using namespace std;

class DataProcessor {
private:
    double totalSum;
    int validCount;
    int invalidCount;

public:
    DataProcessor();
    void reset();
    void processFile(const string& filename);
    void displayResults() const;
};

#endif
