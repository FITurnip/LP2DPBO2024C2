#include "Shirt.hpp"

// Default constructor
Shirt::Shirt() : Clothing(), color(""), sleeveType("") {}

// Parameterized constructor
Shirt::Shirt(std::string size, std::string material, std::string gender, std::string color, std::string sleeveType)
    : Clothing(size, material, gender), color(color), sleeveType(sleeveType) {}

// Getters
std::string Shirt::getColor() {
    return color;
}

std::string Shirt::getSleeveType() {
    return sleeveType;
}

// Setters
void Shirt::setColor(std::string color) {
    this->color = color;
}

void Shirt::setSleeveType(std::string sleeveType) {
    this->sleeveType = sleeveType;
}
