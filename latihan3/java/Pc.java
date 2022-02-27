/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Pc
class Pc {
    //membuat variabel class untuk menampung isi class (composition)
    private Processor prodata = new Processor();
    private Disk diskdata = new Disk();
    private Ram ramdata = new Ram();
    //membuat variabel class processor
    private int totalprice;

    //membuat konstruktor
    public Pc(Processor propc, Disk diskpc, Ram rampc){
        this.prodata = propc;
        this.diskdata = diskpc;
        this.ramdata = rampc;
        this.totalprice = prodata.getproprice() + diskdata.getdiskprice() + ramdata.getramprice();
    }

    //membuat konstruktor dan juga prosedur set
    public Pc(){
    }
    public void setprocessor(Processor propc){
        this.prodata = propc;
    }
    public void setdisk(Disk diskpc){
        this.diskdata = diskpc;
    }
    public void setram(Ram rampc){
        this.ramdata = rampc;
    }
    
    //membuat fungsi get untuk me-return atribut private
    public Processor getprocessor(){
        return this.prodata;
    }
    public Disk getdisk(){
        return this.diskdata;
    }
    public Ram getram(){
        return this.ramdata;
    }

    //membuat prosedur print data pc
    public void printpcdata(){
        prodata.printprodata(); //print data processor dengan memanggil prosedur print yang ada di class processor
        diskdata.printdiskdata(); //print data disk dengan memanggil prosedur print yang ada di class disk
        ramdata.printramdata(); //print data ram dengan memanggil prosedur print yang ada di class ram
        System.out.println("======================");
        System.out.println("Total price: $" + totalprice);
    }
}
