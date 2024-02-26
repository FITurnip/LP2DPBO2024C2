from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self, size="", material="", gender="", color="", sleeve_type=""):
        super().__init__(size, material, gender)
        self.__color = color
        self.__sleeve_type = sleeve_type

    def get_color(self):
        return self.__color

    def set_color(self, color):
        self.__color = color

    def get_sleeve_type(self):
        return self.__sleeve_type

    def set_sleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type
