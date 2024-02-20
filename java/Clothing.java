public class Clothing {
    private String size;
    private String material;
    private String gender;

    // Default constructor
    public Clothing() {
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    // Parameterized constructor
    public Clothing(String size, String material, String gender) {
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // Getters
    public String getSize() {
        return size;
    }

    public String getMaterial() {
        return material;
    }

    public String getGender() {
        return gender;
    }

    // Setters
    public void setSize(String size) {
        this.size = size;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }
}
