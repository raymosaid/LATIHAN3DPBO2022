#Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#Memeanggil class Memory agar bisa dipakai
from Memory import Memory

#Membuat class Hardware dengan Memory sebagai parentnya
class Hardware(Memory):

    #variable/atribut private
    __brand = ""
    __model = ""

    #membuat konsruktor untuk mengubah/mengakses variabel/atribut private
    def __init__(self, brand, model):
        self.__brand = brand
        self.__model = model
    
    #membuat fungsi untuk mengeset variabel/atribut private
    def setbrand(self, brand):
        self.__brand = brand
    def setmodel(self, model):
        self.__model = model

    #membuat fungsi untuk me-return hasil
    def getbrand(self):
        return self.__brand
    def getmodel(self):
        return self.__model
    #pass agar bisa mengakses class parent
    pass
