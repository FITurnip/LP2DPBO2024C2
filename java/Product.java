public class Product extends Shirt {
    private int idProduct;
    private String name;
    private String brand;
    private int price;

    // Default constructor
    public Product() {
        super(); // Calling superclass constructor
        this.idProduct = 0;
        this.name = "";
        this.brand = "";
        this.price = 0;
    }

    // Parameterized constructor
    public Product(String size, String material, String gender, String color, String sleeveType, int idProduct, String name, String brand, int price) {
        super(size, material, gender, color, sleeveType); // Calling superclass constructor
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // Getters
    public int getIdProduct() {
        return idProduct;
    }

    public String getName() {
        return name;
    }

    public String getBrand() {
        return brand;
    }

    public int getPrice() {
        return price;
    }

    // Setters
    public void setIdProduct(int idProduct) {
        this.idProduct = idProduct;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setPrice(int price) {
        this.price = price;
    }
}
