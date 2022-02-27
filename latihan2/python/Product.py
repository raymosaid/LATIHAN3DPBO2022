#Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#Memeanggil class Product
class Product:

    #variable/atribut private
    __price = 0
    __idProduct = ""

    #membuat konsruktor untuk mengubah/mengakses variabel/atribut private
    def __init__(self, price, idProduct):
        self.__price = price
        self.__idProduct = idProduct
    
    #membuat fungsi untuk mengeset variabel/atribut private
    def setprice(self, price):
        self.__price = price
    def setidProduct(self, idProduct):
        self.__idProduct = idProduct
        
    #membuat fungsi untuk me-return hasil
    def getprice(self):
        return self.__price
    def getidProduct(self):
        return self.__idProduct
    