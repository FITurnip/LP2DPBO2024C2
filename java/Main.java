import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Creating a scanner object for user input
        Scanner scanner = new Scanner(System.in);

        // Creating a list of Product objects
        List<Product> productList = new ArrayList<>();
        String size, material, gender, color, sleeveType;
        int productId = 1;
        String name, brand;
        int price;

        // column size
        int sizeLen = 5, materialLen = 9, genderLen = 7,
            colorLen = 6, sleeveTypeLen = 11, productIdLen = 11,
            nameLen = 5, brandLen = 6, priceLen = 6;
        int totalColumnLen = 28;

        // looping input attribute
        boolean inpuStopped = false;
        String nextInput = null;

        // Prompting the user to input at least three products
        System.out.println("Enter details for at least three products:");
        while (!inpuStopped) {
            // input from user
            System.out.println("Product " + productId + ":");
            System.out.print("Enter product name: "); name = scanner.nextLine();
            System.out.print("Enter brand: "); brand = scanner.nextLine();
            System.out.print("Enter price: "); price = Integer.parseInt(scanner.nextLine());

            System.out.print("Enter size: "); size = scanner.nextLine();
            System.out.print("Enter material: "); material = scanner.nextLine();
            System.out.print("Enter gender: "); gender = scanner.nextLine();
            System.out.print("Enter color: "); color = scanner.nextLine();
            System.out.print("Enter sleeve type: "); sleeveType = scanner.nextLine();

            // Adding the input product to the list
            productList.add(new Product(size, material, gender, color, sleeveType, productId, name, brand, price));

            System.out.println(); // Empty line for readability

            // calculate len
            productIdLen = Math.max(productIdLen, String.valueOf(productIdLen).length());
            nameLen = Math.max(nameLen, name.length());
            brandLen = Math.max(brandLen, brand.length());
            priceLen = Math.max(priceLen, String.valueOf(price).length());
            sizeLen = Math.max(sizeLen, size.length());
            materialLen = Math.max(materialLen, material.length());
            genderLen = Math.max(genderLen, gender.length());
            colorLen = Math.max(colorLen, color.length());
            sleeveTypeLen = Math.max(sleeveTypeLen, sleeveType.length());
            
            if(productId >= 3) {
                System.out.print("Next? [1 for yes]: "); nextInput = scanner.nextLine();
                if(nextInput.compareTo("1") != 0) inpuStopped = true;
            }
            productId++;
        }

        // Printing the list of products in a table
        totalColumnLen = totalColumnLen + productIdLen + nameLen + brandLen + priceLen + sizeLen + materialLen + genderLen + colorLen + sleeveTypeLen;

        System.out.println("List of Products:");
        for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) System.out.print("-");
        System.out.print("\n");

        System.out.printf("| %-" + productIdLen + "s | %-" + nameLen + "s | %-" + brandLen + "s | %-" + priceLen + "s | %-" + sizeLen + "s | %-" + materialLen + "s | %-" + genderLen + "s | %-" + colorLen + "s | %-" + sleeveTypeLen + "s |\n",
                "Product ID", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");

        for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) System.out.print("-");
        System.out.print("\n");

        for (Product product : productList) {
            System.out.printf("| %-" + productIdLen + "s | %-" + nameLen + "s | %-" + brandLen + "s | %-" + priceLen + "s | %-" + sizeLen + "s | %-" + materialLen + "s | %-" + genderLen + "s | %-" + colorLen + "s | %-" + sleeveTypeLen + "s |\n",
                    product.getIdProduct(), product.getName(), product.getBrand(), product.getPrice(),
                    product.getSize(), product.getMaterial(), product.getGender(), product.getColor(), product.getSleeveType());
        }

        for(int borderItr = 0; borderItr < totalColumnLen; borderItr++) System.out.print("-");
        System.out.print("\n");
        
        // Closing the scanner
        scanner.close();
    }
}
