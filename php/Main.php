<?php

require_once 'Product.php';

// Creating an array to store Product objects
$productList = [];
$productId = 1;

// Prompting the user to input at least three products
echo "Enter details for at least three products:\n";
for ($productId; $productId <= 3; $productId++) {
    echo "Product $productId:\n";
    echo "Enter product name: "; $name = readline();
    echo "Enter brand: "; $brand = readline();
    echo "Enter price: "; $price = (int)readline();

    echo "Enter size: "; $size = readline();
    echo "Enter material: "; $material = readline();
    echo "Enter gender: "; $gender = readline();
    echo "Enter color: "; $color = readline();
    echo "Enter sleeve type: "; $sleeveType = readline();

    // Adding the input product to the array
    $productList[] = new Product($size, $material, $gender, $color, $sleeveType, $productId, $name, $brand, $price);

    echo "\n";
}

// Printing the list of products in a table
echo "List of Products:\n";
$totalColumnLen = 100;
echo str_repeat("-", $totalColumnLen) . "\n";
echo "| " . str_pad("Product ID", 10) . " | " . str_pad("Name", 15) . " | " . str_pad("Brand", 15) . " | " . str_pad("Price", 10) . " | " . str_pad("Size", 10) . " | " . str_pad("Material", 15) . " | " . str_pad("Gender", 10) . " | " . str_pad("Color", 10) . " | " . str_pad("Sleeve Type", 15) . " |\n";
echo str_repeat("-", $totalColumnLen) . "\n";

foreach ($productList as $product) {
    echo "| " . str_pad($product->getIdProduct(), 10) . " | " . str_pad($product->getName(), 15) . " | " . str_pad($product->getBrand(), 15) . " | " . str_pad($product->getPrice(), 10) . " | " . str_pad($product->getSize(), 10) . " | " . str_pad($product->getMaterial(), 15) . " | " . str_pad($product->getGender(), 10) . " | " . str_pad($product->getColor(), 10) . " | " . str_pad($product->getSleeveType(), 15) . " |\n";
}

echo str_repeat("-", $totalColumnLen) . "\n";

?>
