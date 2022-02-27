/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Disk
class Disk {
    //membuat variabel class disk
    private String type;
    private int capacity;
    private int price;

    //membuat konstruktor
    public Disk(String type, int capacity, int price){
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    //membuat konstruktor dan juga prosedur set
    public Disk(){
    }
    public void settype(String type){
        this.type = type;
    }
    public void setcapacity(int capacity){
        this.capacity = capacity;
    }
    public void setprice(int price){
        this.price = price;
    }
    
    //membuat fungsi get untuk me-return atribut private
    public String gettype(){
        return type;
    }
    public int getcapacity(){
        return capacity;
    }
    public int getdiskprice(){
        return price;
    }

    //membuat prosedur print data disk
    public void printdiskdata(){
        System.out.println("Disk:");
        System.out.println("    Disk type: " + type);
        System.out.println("    Capacity: " + capacity + "TB");
        System.out.println("    Price: $" + price);
    }
}
