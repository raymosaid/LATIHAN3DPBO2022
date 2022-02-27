#Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#membuat class teamdata
class teamdata():

    #variable/atribut private
    __team = ""
    __country = ""
    __est = ""
    __playername = ""

    #membuat konsruktor untuk mengubah/mengakses variabel/atribut private
    def __init__(self, t, c, e, p):
        self.__team = t
        self.__country = c
        self.__est = e
        self.__playername = p
    
    #membuat fungsi untuk me-return hasil proses konstruktor sebelumnya
    def getteam(self):
        return self.__team
    def getcountry(self):
        return self.__country
    def getest(self):
        return self.__est
    def getplayer(self):
        return self.__playername
        