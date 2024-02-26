from Shirt import Shirt

class Product(Shirt):
    def __init__(self, size="", material="", gender="", color="", sleeve_type="", product_id=0, name="", brand="", price=0):
        super().__init__(size, material, gender, color, sleeve_type)
        self.product_id = product_id
        self.name = name
        self.brand = brand
        self.price = price

    def get_product_id(self):
        return self.product_id

    def set_product_id(self, product_id):
        self.product_id = product_id

    def get_name(self):
        return self.name

    def set_name(self, name):
        self.name = name

    def get_brand(self):
        return self.brand

    def set_brand(self, brand):
        self.brand = brand

    def get_price(self):
        return self.price

    def set_price(self, price):
        self.price = price
