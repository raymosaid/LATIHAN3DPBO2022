#Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#Memeanggil class Hardware agar bisa dipakai
from Hardware import Hardware

#Membuat class hardware1
hardware1 = Hardware(None, None)

#Mengeset isi class hardwre1
hardware1.setbrand("NVIDIA")
hardware1.setmodel("RTX 3080 Ti")
hardware1.setfrequency(1365)
hardware1.setmemorySize(12)
hardware1.setsupportsCuda(True)
hardware1.setprice(119)
hardware1.setidProduct("NRTX3080TI")

#Menampilkan isi dari class hardware1, serta hasil dari proses yang terjadi di konstruktor class hardware (inheritance)
print("Brand: " + str(hardware1.getbrand()))
print("Model: " + str(hardware1.getmodel()))
print("Frequency: " + str(hardware1.getfrequency()))
print("Memory size: " + str(hardware1.getmemorySize()))
print("Support CUDA: " + str(hardware1.getsupportsCuda()))
print("Price: " + str(hardware1.getprice()))
print("ID Product: " + str(hardware1.getidProduct()))
