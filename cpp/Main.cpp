#include <iostream>
#include <vector>
#include <string>

// Include necessary headers for Product, Shirt, and Clothing classes
#include "Product.hpp"

using namespace std;

int main() {
    // Creating a vector of Product objects
    vector<Product> productList;
    string size, material, gender, color, sleeveType;
    int productId = 1;
    string name, brand;
    int price;

    // column size
    int sizeLen = 5, materialLen = 9, genderLen = 7,
        colorLen = 6, sleeveTypeLen = 11, productIdLen = 11,
        nameLen = 5, brandLen = 6, priceLen = 6;
    int totalColumnLen = 28;

    // Prompting the user to input at least three products
    cout << "Enter details for at least three products:" << endl;
    for (; productId <= 3; productId++) {
        // input from user
        cout << "Product " << productId << ":" << endl;
        cout << "Enter product name: "; getline(cin, name);
        cout << "Enter brand: "; getline(cin, brand);
        cout << "Enter price: "; cin >> price;
        cin.ignore(); // to clear the newline character in the input buffer

        cout << "Enter size: "; getline(cin, size);
        cout << "Enter material: "; getline(cin, material);
        cout << "Enter gender: "; getline(cin, gender);
        cout << "Enter color: "; getline(cin, color);
        cout << "Enter sleeve type: "; getline(cin, sleeveType);

        // Adding the input product to the list
        productList.push_back(Product(size, material, gender, color, sleeveType, productId, name, brand, price));

        cout << endl; // Empty line for readability

        // calculate len
        productIdLen = max(productIdLen, static_cast<int>(to_string(productIdLen).length()));
        nameLen = max(nameLen, static_cast<int>(name.length()));
        brandLen = max(brandLen, static_cast<int>(brand.length()));
        priceLen = max(priceLen, static_cast<int>(to_string(price).length()));
        sizeLen = max(sizeLen, static_cast<int>(size.length()));
        materialLen = max(materialLen, static_cast<int>(material.length()));
        genderLen = max(genderLen, static_cast<int>(gender.length()));
        colorLen = max(colorLen, static_cast<int>(color.length()));
        sleeveTypeLen = max(sleeveTypeLen, static_cast<int>(sleeveType.length()));
    }

    // Printing the list of products in a table
    totalColumnLen = totalColumnLen + productIdLen + nameLen + brandLen + priceLen + sizeLen + materialLen + genderLen + colorLen + sleeveTypeLen;

    cout << "List of Products:" << endl;
    for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) cout << "-";
    cout << endl;

    printf("| %-*s | %-*s | %-*s | %-*s | %-*s | %-*s | %-*s | %-*s | %-*s |\n",
           productIdLen, "Product ID", nameLen, "Name", brandLen, "Brand", priceLen, "Price",
           sizeLen, "Size", materialLen, "Material", genderLen, "Gender", colorLen, "Color", sleeveTypeLen, "Sleeve Type");

    for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) cout << "-";
    cout << endl;

    for (Product& product : productList) {
        printf("| %-*d | %-*s | %-*s | %-*d | %-*s | %-*s | %-*s | %-*s | %-*s |\n",
               productIdLen, product.getIdProduct(), nameLen, product.getName().c_str(),
               brandLen, product.getBrand().c_str(), priceLen, product.getPrice(),
               sizeLen, product.getSize().c_str(), materialLen, product.getMaterial().c_str(),
               genderLen, product.getGender().c_str(), colorLen, product.getColor().c_str(),
               sleeveTypeLen, product.getSleeveType().c_str());
    }

    for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) cout << "-";
    cout << endl;

    return 0;
}
