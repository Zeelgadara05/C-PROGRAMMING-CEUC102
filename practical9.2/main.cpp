#include <iostream>
#include <string>
#include "WordFrequencyCounter.h"

using namespace std;

int main() {
    WordFrequencyCounter counter;
    string sentence;

    cout << "Enter a sentence to analyze:\n";
    getline(cin, sentence);

    counter.processSentence(sentence);
    counter.displayFrequencies();

    return 0;
}
