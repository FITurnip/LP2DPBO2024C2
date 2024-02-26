#include "Clothing.hpp"

// Default constructor
Clothing::Clothing() : size(""), material(""), gender("") {}

// Parameterized constructor
Clothing::Clothing(std::string size, std::string material, std::string gender)
    : size(size), material(material), gender(gender) {}

// Getters
std::string Clothing::getSize() {
    return size;
}

std::string Clothing::getMaterial() {
    return material;
}

std::string Clothing::getGender() {
    return gender;
}

// Setters
void Clothing::setSize(std::string size) {
    this->size = size;
}

void Clothing::setMaterial(std::string material) {
    this->material = material;
}

void Clothing::setGender(std::string gender) {
    this->gender = gender;
}
