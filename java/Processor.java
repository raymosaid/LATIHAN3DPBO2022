/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Processor
class Processor {
    //membuat variabel class processor
    private String name;
    private int price;

    //membuat konstruktor
    public Processor(String name, int price){
        this.name = name;
        this.price = price;
    }

    //membuat konstruktor dan juga prosedur set
    public Processor(){
    }
    public void setname(String name){
        this.name = name;
    }
    public void setprice(int price){
        this.price = price;
    }
    
    //membuat fungsi get untuk me-return atribut private
    public String getname(){
        return name;
    }
    public int getproprice(){
        return price;
    }

    //membuat prosedur print data processor
    public void printprodata(){
        System.out.println("Processor:");
        System.out.println("    Processor name: " + name);
        System.out.println("    Price: $" + price);
    }
}
