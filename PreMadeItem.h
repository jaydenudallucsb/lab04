#include <string>
#include <iostream>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
    public: 
        PreMadeItem(std::string name, std::string size);
        virtual ~PreMadeItem();
        std::string composeItem() override;
        double getPrice() override;
    private:
        std::string pmName;
};