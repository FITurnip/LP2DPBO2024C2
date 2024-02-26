#include "Product.hpp"

// Default constructor
Product::Product() : Shirt(), idProduct(0), name(""), brand(""), price(0) {}

// Parameterized constructor
Product::Product(std::string size, std::string material, std::string gender, std::string color, std::string sleeveType,
                 int idProduct, std::string name, std::string brand, int price)
    : Shirt(size, material, gender, color, sleeveType), idProduct(idProduct), name(name), brand(brand), price(price) {}

// Getters
int Product::getIdProduct() {
    return idProduct;
}

std::string Product::getName() {
    return name;
}

std::string Product::getBrand() {
    return brand;
}

int Product::getPrice() {
    return price;
}

// Setters
void Product::setIdProduct(int idProduct) {
    this->idProduct = idProduct;
}

void Product::setName(std::string name) {
    this->name = name;
}

void Product::setBrand(std::string brand) {
    this->brand = brand;
}

void Product::setPrice(int price) {
    this->price = price;
}
