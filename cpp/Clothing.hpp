#ifndef CLOTHING_H
#define CLOTHING_H

#include <string>

class Clothing {
private:
    std::string size;
    std::string material;
    std::string gender;

public:
    // Default constructor
    Clothing();

    // Parameterized constructor
    Clothing(std::string size, std::string material, std::string gender);

    // Getters
    std::string getSize();
    std::string getMaterial();
    std::string getGender();

    // Setters
    void setSize(std::string size);
    void setMaterial(std::string material);
    void setGender(std::string gender);
};

#endif /* CLOTHING_H */
