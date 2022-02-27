#Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#memanggil class yang sudah dibuat
from Processor import Processor
from Disk import Disk
from Ram import Ram

#membuat class Pc
class Pc:
    #membuat variabel class untuk menampung isi class (composition)
    __prodata = Processor(None, None)
    __diskdata = Disk(None, None, None)
    __ramdata = Ram(None, None)
    #membuat variabel class processor
    __totalprice = 0

    #membuat konstruktor
    def __init__(self, prodata, diskdata, ramdata):
        self.__prodata = prodata
        self.__diskdata = diskdata
        self.__ramdata = ramdata
        self.__totalprice = self.__prodata.getproprice() + self.__diskdata.getdiskprice() + self.__ramdata.getramprice()
    
    #membuat fungsi set untuk mengisi atribut private
    def setprodata(self, pcdata):
        self.__pcdata = pcdata
    def setdiskdata(self, diskdata):
        self.__diskdata = diskdata
    def setramdata(self, ramdata):
        self.__ramdata = ramdata
    def settotalprice(self, totalprice):
        self.__totalprice = self.__prodata.getproprice() + self.__diskdata.getdiskprice() + self.__ramdata.getramprice()
    
    #membuat fungsi get untuk me-return atribut private
    def getprodata(self):
        return self.__pcdata
    def getdiskdata(self):
        return self.__diskdata
    def getramdata(self):
        return self.__ramdata
    def gettotalprice(self):
        return self.__totalprice

    #membuat prosedur print data pc
    def printpcdata(self):
        self.__prodata.printprodata() #print data processor dengan memanggil prosedur print yang ada di class processor
        self.__diskdata.printdiskdata() #print data disk dengan memanggil prosedur print yang ada di class disk
        self.__ramdata.printramdata() #print data ram dengan memanggil prosedur print yang ada di class ram
        print("=========================")
        print("Total price: $", self.__totalprice)
