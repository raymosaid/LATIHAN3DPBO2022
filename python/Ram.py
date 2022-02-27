#Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#membuat class Processor
class Ram:
    #membuat variabel class processor
    __capacity = 0
    __price = 0

    #membuat konstruktor
    def __init__(self, capacity, price):
        self.__capacity = capacity
        self.__price = price

    #membuat fungsi set untuk mengisi atribut private
    def setcapacity(self, capacity):
        self.__capacity = capacity
    def setramprice(self, price):
        self.__price = price

    #membuat fungsi get untuk me-return atribut private
    def getcapacity(self):
        return self.__capacity
    def getramprice(self):
        return self.__price

    #membuat prosedur print data processor
    def printramdata(self):
        print("Ram:")
        print("     Capacity: ", self.__capacity , "GB")
        print("     Price: $", self.__price)
