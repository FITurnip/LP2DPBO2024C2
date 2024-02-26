from Shirt import Shirt

class Product(Shirt):
    def __init__(self, size="", material="", gender="", color="", sleeve_type="", product_id=0, name="", brand="", price=0):
        super().__init__(size, material, gender, color, sleeve_type)
        self.__product_id = product_id
        self.__name = name
        self.__brand = brand
        self.__price = price

    def get_product_id(self):
        return self.__product_id

    def set_product_id(self, product_id):
        self.__product_id = product_id

    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

    def get_brand(self):
        return self.__brand

    def set_brand(self, brand):
        self.__brand = brand

    def get_price(self):
        return self.__price

    def set_price(self, price):
        self.__price = price
