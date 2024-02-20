public class Shirt extends Clothing {
    private String color;
    private String sleeveType;

    // Default constructor
    public Shirt() {
        super(); // Calling superclass constructor
        this.color = "";
        this.sleeveType = "";
    }

    // Parameterized constructor
    public Shirt(String size, String material, String gender, String color, String sleeveType) {
        super(size, material, gender); // Calling superclass constructor
        this.color = color;
        this.sleeveType = sleeveType;
    }

    // Getters
    public String getColor() {
        return color;
    }

    public String getSleeveType() {
        return sleeveType;
    }

    // Setters
    public void setColor(String color) {
        this.color = color;
    }

    public void setSleeveType(String sleeveType) {
        this.sleeveType = sleeveType;
    }
}
