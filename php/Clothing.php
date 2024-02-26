<?php

class Clothing {
    private $size;
    private $material;
    private $gender;

    // Parameterized constructor
    public function __construct($size = "", $material = "", $gender = "") {
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // Getters
    public function getSize() {
        return $this->size;
    }

    public function getMaterial() {
        return $this->material;
    }

    public function getGender() {
        return $this->gender;
    }

    // Setters
    public function setSize($size) {
        $this->size = $size;
    }

    public function setMaterial($material) {
        $this->material = $material;
    }

    public function setGender($gender) {
        $this->gender = $gender;
    }
}

?>
