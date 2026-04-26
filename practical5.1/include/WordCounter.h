#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#include <string>

using namespace std;

const int MAX_WORDS = 1000;

class WordCounter {
private:
    string uniqueWords[MAX_WORDS];
    int counts[MAX_WORDS];
    int uniqueCount;

    void toLowerCase(string &str);

public:
    WordCounter();
    void processParagraph(const string& paragraph);
    void displayFrequencies() const;
};

#endif
