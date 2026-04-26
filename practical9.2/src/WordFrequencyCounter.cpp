#include "WordFrequencyCounter.h"
#include <iostream>
#include <sstream>

using namespace std;

void WordFrequencyCounter::cleanAndLower(string& str) {
    string cleaned = "";
    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            cleaned += (ch + 32);
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            cleaned += ch;
        }
    }
    str = cleaned;
}

void WordFrequencyCounter::processSentence(const string& sentence) {
    wordCounts.clear();
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        cleanAndLower(word);
        if (word.length() > 0) {
            wordCounts[word]++;
        }
    }
}

void WordFrequencyCounter::displayFrequencies() const {
    cout << "\n--- Unique Word Frequencies ---\n";
    if (wordCounts.empty()) {
        cout << "No valid words found.\n";
        return;
    }

    for (map<string, int>::const_iterator it = wordCounts.begin(); it != wordCounts.end(); ++it) {
        cout << it->first << " : " << it->second << "\n";
    }
}
