#Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#Memeanggil class Product agar bisa dipakai
from Product import Product

#Membuat class Memory dengan Product sebagai parentnya
class Memory(Product):

    #variable/atribut private
    __frequency = 0
    __memorySize = 0
    __supportsCuda = True

    #membuat konsruktor untuk mengubah/mengakses variabel/atribut private
    def __init__(self, frequency, memorySize, supportsCuda):
        self.__frequency = frequency
        self.__memorySize = memorySize
        self.__supportsCuda = supportsCuda
    
    #membuat fungsi untuk mengeset variabel/atribut private
    def setfrequency(self, frequency):
        self.__frequency = frequency
    def setmemorySize(self, memorySize):
        self.__memorySize = memorySize
    def setsupportsCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda

    #membuat fungsi untuk me-return hasil proses konstruktor sebelumnya
    def getfrequency(self):
        return self.__frequency
    def getmemorySize(self):
        return self.__memorySize
    def getsupportsCuda(self):
        return self.__supportsCuda
    #pass agar bisa mengakses class parent
    pass
