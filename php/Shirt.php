<?php

require_once 'Clothing.php';

class Shirt extends Clothing {
    private $color;
    private $sleeveType;

    // Parameterized constructor
    public function __construct($size = "", $material = "", $gender = "", $color = "", $sleeveType = "") {
        parent::__construct($size, $material, $gender);
        $this->color = $color;
        $this->sleeveType = $sleeveType;
    }

    // Getters
    public function getColor() {
        return $this->color;
    }

    public function getSleeveType() {
        return $this->sleeveType;
    }

    // Setters
    public function setColor($color) {
        $this->color = $color;
    }

    public function setSleeveType($sleeveType) {
        $this->sleeveType = $sleeveType;
    }
}

?>
