package javaInterface.template;

public abstract class AMahasiswa {
    private String nama;
    private String jurusan;
    private int nim;
    private IDosen dosen;

    public AMahasiswa(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    protected String getNama(){
        return this.nama;
    }
    protected String getJurusan(){
        return this.jurusan;
    }
    protected int getNim(){
        return this.nim;
    }
    
    public void pullCompositionDosen(IDosen dosen){
        this.dosen = dosen;
    }

    public void outDataAll(){
        outData();
        dosen.outData();
    }

    public void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }

    protected abstract void tampilkanNim();
}
