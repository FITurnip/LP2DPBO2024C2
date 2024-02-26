<?php

require_once 'Product.php';

// Creating an array to store Product objects
$productList = [];
$productId = 1;

$productList[] = new Product("Size 1", "Material 1", "Man", "Yellow", "Sleeve Type 1", 1, "Name 1", "Brand 1", 1000000);
$productList[] = new Product("Size 2", "Material 2", "Man", "Yellow", "Sleeve Type 2", 2, "Name 2", "Brand 2", 2000000);
$productList[] = new Product("Size 4", "Material 4", "Man", "Yellow", "Sleeve Type 4", 4, "Name 4", "Brand 4", 4000000);
$productList[] = new Product("Size 8", "Material 8", "Man", "Yellow", "Sleeve Type 8", 8, "Name 8", "Brand 8", 8000000);
$productList[] = new Product("Size 16", "Material 16", "Man", "Yellow", "Sleeve Type 16", 16, "Name 16", "Brand 16", 16000000);
$productList[] = new Product("Size 32", "Material 32", "Man", "Yellow", "Sleeve Type 32", 32, "Name 32", "Brand 32", 32000000);
$productList[] = new Product("Size 64", "Material 64", "Man", "Yellow", "Sleeve Type 64", 64, "Name 64", "Brand 64", 64000000);
$productList[] = new Product("Size 128", "Material 128", "Man", "Yellow", "Sleeve Type 128", 128, "Name 128", "Brand 128", 128000000);
$productList[] = new Product("Size 256", "Material 256", "Man", "Yellow", "Sleeve Type 256", 256, "Name 256", "Brand 256", 256000000);
$productList[] = new Product("Size 1024", "Material 1024", "Man", "Yellow", "Sleeve Type 1024", 1024, "Name 1024", "Brand 1024", 1024000000);
$productList[] = new Product("Size 2048", "Material 2048", "Man", "Yellow", "Sleeve Type 2048", 2048, "Name 2048", "Brand 2048", 2048000000);
?>

<table border="1">
    <tr>
        <th>Product ID</th>
        <th>Name</th>
        <th>Brand</th>
        <th>Price</th>
        <th>Size</th>
        <th>Material</th>
        <th>Gender</th>
        <th>Color</th>
        <th>Sleeve Type</th>
    </tr>
    <?php
    foreach($productList as $product) {
        echo "<tr>
            <td>{$product->getIdProduct()}</td>
            <td>{$product->getName()}</td>
            <td>{$product->getBrand()}</td>
            <td>{$product->getPrice()}</td>
            <td>{$product->getSize()}</td>
            <td>{$product->getMaterial()}</td>
            <td>{$product->getGender()}</td>
            <td>{$product->getColor()}</td>
            <td>{$product->getSleeveType()}</td>
        </tr>";
    }
    ?>
</table>
