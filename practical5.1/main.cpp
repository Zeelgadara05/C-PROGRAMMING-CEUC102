#include <iostream>
#include <string>
#include "WordCounter.h"

using namespace std;

int main() {
    string paragraph;
    WordCounter counter;

    cout << "Enter a paragraph to analyze:\n";

    getline(cin, paragraph);

    counter.processParagraph(paragraph);
    counter.displayFrequencies();

    return 0;
}
