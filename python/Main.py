from Product import Product

class Main:
    # Creating a list of Product objects
    product_list = []
    product_id = 1

    # looping input attribute
    inputStopped = False

     # Column lengths
    sizeLen = 5
    materialLen = 9
    genderLen = 7
    colorLen = 6
    sleeveTypeLen = 11
    productIdLen = 11
    nameLen = 5
    brandLen = 6
    priceLen = 6
    totalColumnLen = 28

    # Prompting the user to input at least three products
    print("Enter details for at least three products:")
    while inputStopped == False:
        print("Product", product_id, ":")
        name = input("Enter product name: ")
        brand = input("Enter brand: ")
        price = int(input("Enter price: "))
        size = input("Enter size: ")
        material = input("Enter material: ")
        gender = input("Enter gender: ")
        color = input("Enter color: ")
        sleeve_type = input("Enter sleeve type: ")

        # Adding the input product to the list
        product_list.append(Product(size, material, gender, color, sleeve_type, product_id, name, brand, price))

        # Updating column lengths
        productIdLen = max(productIdLen, len(str(product_id)))
        nameLen = max(nameLen, len(name))
        brandLen = max(brandLen, len(brand))
        priceLen = max(priceLen, len(str(price)))
        sizeLen = max(sizeLen, len(size))
        materialLen = max(materialLen, len(material))
        genderLen = max(genderLen, len(gender))
        colorLen = max(colorLen, len(color))
        sleeveTypeLen = max(sleeveTypeLen, len(sleeve_type))

        if product_id >= 3:
            nextInput = input("Next? [1 for yes]: ")
            if nextInput != "1":
                inputStopped = True

        product_id = product_id + 1

    # Printing the list of products in a table
    totalColumnLen = totalColumnLen + productIdLen + nameLen + brandLen + priceLen + sizeLen + materialLen + genderLen + colorLen + sleeveTypeLen

    print("-" * totalColumnLen)

    print("| {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} |".format(
        "Product ID", productIdLen, "Name", nameLen, "Brand", brandLen, "Price", priceLen, "Size", sizeLen, "Material", materialLen, "Gender", genderLen, "Color", colorLen, "Sleeve Type", sleeveTypeLen))

    print("-" * totalColumnLen)

    for product in product_list:
        print("| {:<{}d} | {:<{}s} | {:<{}s} | {:<{}d} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} | {:<{}s} |".format(
            product.get_product_id(), productIdLen, product.get_name(), nameLen, product.get_brand(), brandLen, product.get_price(), priceLen,
            product.get_size(), sizeLen, product.get_material(), materialLen, product.get_gender(), genderLen, product.get_color(), colorLen,
            product.get_sleeve_type(), sleeveTypeLen))

    print("-" * totalColumnLen)
