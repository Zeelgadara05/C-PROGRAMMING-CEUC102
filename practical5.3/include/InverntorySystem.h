#ifndef INVENTORYSYSTEM_H
#define INVENTORYSYSTEM_H

#include <string>

using namespace std;

class InventorySystem {
private:
    string filename;
    void parseLine(const string& line, string& name, string& qty, string& price) const;

public:
    InventorySystem(string file);
    void addItem(const string& name, const string& qty, const string& price);
    void viewAll() const;
    void searchItem(const string& searchName) const;
};

#endif
