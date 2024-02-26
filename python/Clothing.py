class Clothing:
    def __init__(self, size="", material="", gender=""):
        self.size = size
        self.material = material
        self.gender = gender

    def get_size(self):
        return self.size

    def set_size(self, size):
        self.size = size

    def get_material(self):
        return self.material

    def set_material(self, material):
        self.material = material

    def get_gender(self):
        return self.gender

    def set_gender(self, gender):
        self.gender = gender