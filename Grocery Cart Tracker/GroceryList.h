#ifndef GROCERYLIST_H
#define GROCERYLIST_H
#include <iostream> //the input/output stream library of C++

// using namespace std;//never put using namespace anything inside a header file. The header file might be included
// by many other files which may not wish to use the namespace.

class GroceryList
{ // variables and functions are private by default with classes
private:
    std::string name; // the string data type is basically a character array. It has many features
                      // that make char arrays easy to use.
    int barcode;
    double cost;
    char taxable;
    double tax;

public:
    GroceryList();
    GroceryList(const std::string _name, const int _barcode, const double cost, const char taxable);
    ~GroceryList();
    bool setName(const std::string _name);
    bool setBarcode(const int _barcode);
    bool setCost(const double _cost);
    bool setisTaxable(const char taxable);
    std::string GetName() const;
    double GetCost() const;
    double calculateTaxes(void);
    void displayInfo();
};
#endif
