#include "IceCreamItem.h"
#include "PreMadeItem.h"
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip> 


PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size) {
    this->pmName = name;
    this->price += 1.00;
}

PreMadeItem::~PreMadeItem() {

}

std::string PreMadeItem::composeItem() {
    std::ostringstream oss;
    oss << "Pre-made Size: " << this->size << "\n";
    oss << "Pre-made Item: " << this->pmName << "\n";
    oss << "Price: $" << std::fixed << std::setprecision(2) << this->getPrice() << "\n";
    return oss.str();
}

double PreMadeItem::getPrice() {
    return this->price;
}