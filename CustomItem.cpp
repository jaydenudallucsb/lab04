#include <string>
#include "IceCreamItem.h"
#include "CustomItem.h"
#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>


CustomItem::CustomItem(std::string size) : IceCreamItem(size) {}

CustomItem::~CustomItem() {
    
}

void CustomItem::addTopping(std::string topping) {
    
    toppings[topping] += 1;
   
    this->price += 0.40;
}
double CustomItem::getPrice() {
    return this->price;
}

std::string CustomItem::composeItem() {
    std::ostringstream oss;
    oss << "Custom Size: " << this->size << "\n";
    oss << "Toppings:" << "\n";
    for (auto& topping : toppings) {
        oss << topping.first << ": " << topping.second << " oz" << "\n";
    }
    oss << "Price: $" << std::fixed << std::setprecision(2) << this->getPrice() << "\n";
    return oss.str();
}

