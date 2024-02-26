#ifndef SHIRT_H
#define SHIRT_H

#include "Clothing.hpp"
#include <string>

class Shirt : public Clothing {
private:
    std::string color;
    std::string sleeveType;

public:
    // Default constructor
    Shirt();

    // Parameterized constructor
    Shirt(std::string size, std::string material, std::string gender, std::string color, std::string sleeveType);

    // Getters
    std::string getColor();
    std::string getSleeveType();

    // Setters
    void setColor(std::string color);
    void setSleeveType(std::string sleeveType);
};

#endif /* SHIRT_H */
