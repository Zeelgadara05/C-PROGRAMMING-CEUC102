#ifndef FILECOUNTER_H
#define FILECOUNTER_H

#include <string>

using namespace std;

class FileCounter {
private:
    int charCount;
    int wordCount;
    int lineCount;

public:
    FileCounter();
    bool processFile(const string& filename);
    void displayStats() const;
};

#endif
