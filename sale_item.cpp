#include "sale_item.h"
#include <iostream>
using namespace std;
ostream& operator<<(ostream& os, const SaleItem& item)
{
    os << "Average Sale Price: "<<item.averageSalePrice<<endl;
    os << "Number Of Copies: "<<item.numberOfCopies<<endl;
    os << "Revenue: "<<item.revenue<<endl;
    return os;

}

istream &operator>>(istream &is,  SaleItem &item)
{

    cout << "Input AverageSalePrice: "<<endl;
    is >> item.averageSalePrice;
     cout << "Input Number of copies: "<<endl;
    is >> item.numberOfCopies;
    item.revenue = item.averageSalePrice  * item.numberOfCopies;
    return is;
}
 SaleItem operator+(SaleItem& item1, SaleItem& item2 )
 { 
    SaleItem item3;
    item3.averageSalePrice = item1.averageSalePrice + item2.averageSalePrice;
    item3.numberOfCopies = item1.numberOfCopies + item2.numberOfCopies;
    item3.revenue = item1.revenue + item2.revenue;
    return item3;
 }