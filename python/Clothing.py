class Clothing:
    def __init__(self, size="", material="", gender=""):
        self.__size = size
        self.__material = material
        self.__gender = gender

    def get_size(self):
        return self.__size

    def set_size(self, size):
        self.__size = size

    def get_material(self):
        return self.__material

    def set_material(self, material):
        self.__material = material

    def get_gender(self):
        return self.__gender

    def set_gender(self, gender):
        self.__gender = gender