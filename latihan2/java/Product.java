/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Product sebagai parent dari seluruh proses inheritance
class Product{
    //membuat atribut private
    private int price;
    private String idProduct;

    //membuat konstruktor sekaligus mengeset atribut private
    public Product(int price, String idProduct){
        this.price = price;
        this.idProduct = idProduct;
    }

    //membuat konstruktor
    public Product(){
    }
    //membuat fungsi untuk mengeset atribut private
    public void setprice(int price){
        this.price = price;
    }
    public void setidProduct(String idProduct){
        this.idProduct = idProduct;
    }
    
    //membuat fungsi untuk me-return atribut private
    public int getprice(){
        return price;
    }
    public String getidProduct(){
        return idProduct;
    }
}
