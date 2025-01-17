package composition;

class Dosen {
    private String nama;
    private String matkul;
    private int nidn;

    Dosen(String nama, String matkul, int nidn){
        this.nama = nama;
        this.matkul = matkul;
        this.nidn = nidn;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.matkul);
        System.out.println(this.nidn);
    }
}
