/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Ram
class Ram {
    //membuat variabel class ram
    private int capacity;
    private int price;

    //membuat konstruktor
    public Ram(int capacity, int price){
        this.capacity = capacity;
        this.price = price;
    }

    //membuat konstruktor dan juga prosedur set
    public Ram(){
    }
    public void setcapacity(int capacity){
        this.capacity = capacity;
    }
    public void setprice(int price){
        this.price = price;
    }
    
    //membuat fungsi get untuk me-return atribut private
    public int getcapacity(){
        return capacity;
    }
    public int getramprice(){
        return price;
    }

    //membuat prosedur print data ram
    public void printramdata(){
        System.out.println("Ram:");
        System.out.println("    Capacity: " + capacity + "GB");
        System.out.println("    Price: $" + price);
    }
}
