#Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#memanggil class yang sudah dibuat
from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

#membuat kemudian mengisi seluruh class
prodata = Processor("Apple_M1_Max", 2499)
diskdata = Disk("SSD", 1, 197)
ramdata = Ram(32, 139)
pcdata = Pc(prodata, diskdata, ramdata)  #class yang sudah diisi sebelumnya dimasukkan ke class pc

#print class pc
pcdata.printpcdata()
