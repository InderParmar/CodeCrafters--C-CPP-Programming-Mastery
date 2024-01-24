#include "GroceryList.h"
using namespace std;
GroceryList::GroceryList()
{
    name = "";
    barcode = 0;
    cost = 0.00;
    taxable = 'Y';
}
GroceryList::GroceryList(const std::string _name, const int _barcode, const double _cost, const char _taxable)
{
    bool ret = setName(_name);
    if (ret)
        ret = setBarcode(_barcode);
    if (ret)
        ret = setCost(_cost);
}
GroceryList::~GroceryList()
{
    cout << "PersonalInfo::~PersonalInfo: " << endl;
    name = "";
    barcode = 0;
    cost = 0.00;
    taxable = ' ';
}
bool GroceryList::setName(const std::string _name)
{
    bool retVal = true;
    if (_name.size() <= 0)
    {
        retVal = false;
    }
    else
    {
        name = _name;
    }
    return retVal;
}
bool GroceryList::setBarcode(const int _barcode)
{
    bool retVal = true;
    if (_barcode > 9999999)
    {
        retVal = false;
    }
    else
    {
        barcode = _barcode;
    }
    return retVal;
}
bool GroceryList::setCost(const double _cost)
{
    bool retVal = true;
    if (_cost < 0)
    {
        retVal = false;
    }
    else
    {
        cost = _cost;
    }
    return retVal;
}
bool GroceryList::setisTaxable(const char _taxable)
{
    bool retVal = true;
    if (_taxable == 'y' || _taxable == 'Y' || _taxable == 'n' || _taxable == 'N')
    {
        taxable = _taxable;
    }
    else
    {
        retVal = false;
    }
    return retVal;
}

std::string GroceryList::GetName() const
{
    return name;
}
double GroceryList::calculateTaxes(void)
{
    if (taxable == 'y' || taxable == 'Y')
    {
        tax = 0.13 * cost;
    }
    else
    {
        tax = 0.00;
    }
    return tax;
}
void GroceryList::displayInfo()
{

    std::cout << std::left << std::setw(30) << "name: " + name
              << "cost: $" << std::setw(6) << std::fixed << std::setprecision(2) << cost
              << "tax: $" << std::setw(4) << tax << std::endl;
}
double GroceryList::GetCost() const
{
    return cost;
}

/*   std::string name;//the string data type is basically a character array. It has many features
                   //that make char arrays easy to use.
  int barcode;
  double cost;
  char taxable; */