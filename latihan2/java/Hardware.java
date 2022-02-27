/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Hardware dengan menunjuk parentnya yaitu Memory
class Hardware extends Memory{
    //membuat atribut private
    private String brand;
    private String model;

    //membuat konstruktor sekaligus mengeset atribut private
    public Hardware(String brand, String model){
        this.brand = brand;
        this.model = model;
    }

    //membuat konstruktor
    public Hardware(){
    }
    //membuat fungsi untuk mengeset atribut private
    public void setbrand(String brand){
        this.brand = brand;
    }
    public void setmodel(String model){
        this.model = model;
    }
    
    //membuat fungsi untuk me-return atribut private
    public String getbrand(){
        return brand;
    }
    public String getmodel(){
        return model;
    }
}
