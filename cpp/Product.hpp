#ifndef PRODUCT_H
#define PRODUCT_H

#include "Shirt.hpp"
#include <string>

class Product : public Shirt {
private:
    int idProduct;
    std::string name;
    std::string brand;
    int price;

public:
    // Default constructor
    Product();

    // Parameterized constructor
    Product(std::string size, std::string material, std::string gender, std::string color, std::string sleeveType,
            int idProduct, std::string name, std::string brand, int price);

    // Getters
    int getIdProduct();
    std::string getName();
    std::string getBrand();
    int getPrice();

    // Setters
    void setIdProduct(int idProduct);
    void setName(std::string name);
    void setBrand(std::string brand);
    void setPrice(int price);
};

#endif /* PRODUCT_H */
