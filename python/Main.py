from Product import Product

class Main:
    # Creating a list of Product objects
    product_list = []

    # Prompting the user to input at least three products
    print("Enter details for at least three products:")
    for product_id in range(1, 4):
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

    # Printing the list of products in a table
    print("List of s:")
    total_column_len = 90

    print("-" * total_column_len)
    print("| {:<11} | {:<20} | {:<15} | {:<6} | {:<5} | {:<8} | {:<7} | {:<6} | {:<11} |".format(
        "Product ID", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type"))
    print("-" * total_column_len)

    for product in product_list:
        print("| {:<11} | {:<20} | {:<15} | {:<6} | {:<5} | {:<8} | {:<7} | {:<6} | {:<11} |".format(
            product.get_product_id(), product.get_name(), product.get_brand(), product.get_price(),
            product.get_size(), product.get_material(), product.get_gender(), product.get_color(), product.get_sleeve_type()))

    print("-" * total_column_len)
