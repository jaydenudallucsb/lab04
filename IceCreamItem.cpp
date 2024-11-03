#include "IceCreamItem.h"
#include <string>


IceCreamItem::IceCreamItem(std::string size) {
    this->size = size;
    if (size == "small") {
        price = 3.00;
    }
    else if (size == "medium") {
        price = 5.00;
    }
    else if (size == "large") {
        price = 6.50;
    }
}
