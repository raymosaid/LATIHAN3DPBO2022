/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Memory dengan menunjuk parentnya yaitu Product
class Memory extends Product{
    //membuat atribut private
    private int frequency;
    private int memorySize;
    private boolean supportsCuda;

    //membuat konstruktor sekaligus mengeset atribut private
    public Memory(int frequency, int memorySize, boolean supportsCuda){
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    //membuat konstruktor
    public Memory(){
    }
    //membuat fungsi untuk mengeset atribut private
    public void setfrequency(int frequency){
        this.frequency = frequency;
    }
    public void setmemorySize(int memorySize){
        this.memorySize = memorySize;
    }
    public void setsupportsCuda(boolean supportsCuda){
        this.supportsCuda = supportsCuda;
    }
    
    //membuat fungsi untuk me-return atribut private
    public int getfrequency(){
        return frequency;
    }
    public int getmemorySize(){
        return memorySize;
    }
    public boolean getsupportsCuda(){
        return supportsCuda;
    }
}
