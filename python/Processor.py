#Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#membuat class Processor
class Processor:
    #membuat variabel class processor
    __name = ""
    __price = 0

    #membuat konstruktor
    def __init__(self, name, price):
        self.__name = name
        self.__price = price

    #membuat fungsi set untuk mengisi atribut private
    def setname(self, name):
        self.__name = name
    def setproprice(self, price):
        self.__price = price

    #membuat fungsi get untuk me-return atribut private
    def getname(self):
        return self.__name
    def getproprice(self):
        return self.__price

    #membuat prosedur print data processor
    def printprodata(self):
        print("Processor:")
        print("     Processor Name: ", self.__name)
        print("     Price: $", self.__price)
