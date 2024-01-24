#include <iomanip>
#include <iostream> //the input/output stream library of C++

#include "GroceryList.cpp"

using namespace std;

int main()
{
    int NUM;
    cout << "Enter the number of grocery items (5 max):";
    cin >> NUM;
    GroceryList items[NUM];
    bool ret = false;
    int retVal = 0;
    std::string _name;
    int _barcode;
    double _cost;
    double taxes = 0.00;
    double subtotal = 0.00;
    char _taxable;
    double _tax;
  
    for (int i = 0; i < NUM; i++)
    {
        do
        {
            cout << "Enter the name of the grocery item: ";
            cin.ignore(1000, '\n'); // get rid of extra characters until the carriage return

            getline(std::cin, _name);
            ret = items[i].setName(_name);
            if (ret == false)
                cout << "Invalid name" << endl;
        } while (ret == false);
        do
        {
            cout << "Enter the barcode of the grocery item(up to 7 digits) : ";
            cin >> _barcode;
            ret = items[i].setBarcode(_barcode);
            if (ret == false)
                cout << "Invalid barcode" << endl;
        } while (ret == false);
        do
        {
            cout << "Enter the cost of the grocery item : $";
            cin >> _cost;
            ret = items[i].setCost(_cost);
            if (ret == false)
                cout << "Invalid cost" << endl;
        } while (ret == false);

        do
        {
            cout << "Is the grocery item taxable? [Y/N] ";
            cin.ignore(1000, '\n'); // get rid of extra characters until the carriage return

            cin >> _taxable;
            ret = items[i].setisTaxable(_taxable);
            if (ret == false)
                cout << "Invalid character, enter y/n (Y/N)" << endl;
        } while (ret == false);
        cout << endl;
    }
    for (int i = 0; i < NUM; i++)
    {
        subtotal += items[i].GetCost();
        taxes += items[i].calculateTaxes();
        items[i].displayInfo();
    }
    cout << "-----------------------------" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Total: $" << subtotal + taxes << endl;
    return (ret ? 0 : -1);
}