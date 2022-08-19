#pragma
#include <iostream>
using namespace std;
class SaleItem 
{
    public: ;
    friend ostream& operator<<(ostream& os, const SaleItem& item);
    friend istream& operator>>(istream& is, const SaleItem& item);
    friend SaleItem operator+(SaleItem& item1, SaleItem& item2 );
    float averageSalePrice ;
    int numberOfCopies;
    float revenue;
    ;
};