#Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#membuat class disk
class Disk:
    #membuat variabel class disk
    __type = ""
    __capacity = 0
    __price = 0

    #membuat konstruktor
    def __init__(self, type, capacity, price):
        self.__type = type
        self.__capacity = capacity
        self.__price = price

    #membuat fungsi set untuk mengisi atribut private
    def settype(self, type):
        self.__type = type
    def setcapacity(self, capacity):
        self.__capacity = capacity
    def setdiskprice(self, price):
        self.__price = price

    #membuat fungsi get untuk me-return atribut private
    def gettype(self):
        return self.__type
    def getcapacity(self):
        return self.__capacity
    def getdiskprice(self):
        return self.__price

    #membuat prosedur print data disk
    def printdiskdata(self):
        print("Disk:")
        print("     Disk type: ", self.__type)
        print("     Capacity: ", self.__capacity , "TB")
        print("     Price: $", self.__price)
