#ifndef WORDFREQUENCYCOUNTER_H
#define WORDFREQUENCYCOUNTER_H

#include <string>
#include <map>

using namespace std;

class WordFrequencyCounter {
private:
    map<string, int> wordCounts;

    void cleanAndLower(string& str);

public:
    void processSentence(const string& sentence);
    void displayFrequencies() const;
};

#endif
