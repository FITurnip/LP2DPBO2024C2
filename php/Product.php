<?php

require_once 'Shirt.php';

class Product extends Shirt {
    private $idProduct;
    private $name;
    private $brand;
    private $price;

    // Parameterized constructor
    public function __construct($size = 0, $material = "", $gender = "", $color = "", $sleeveType = "", $idProduct = "", $name = "", $brand = "", $price = 0) {
        parent::__construct($size, $material, $gender, $color, $sleeveType);
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    // Getters
    public function getIdProduct() {
        return $this->idProduct;
    }

    public function getName() {
        return $this->name;
    }

    public function getBrand() {
        return $this->brand;
    }

    public function getPrice() {
        return $this->price;
    }

    // Setters
    public function setIdProduct($idProduct) {
        $this->idProduct = $idProduct;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public function setBrand($brand) {
        $this->brand = $brand;
    }

    public function setPrice($price) {
        $this->price = $price;
    }
}

?>
