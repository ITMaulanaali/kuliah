package specialMethod;

class MahasiswaConstructor {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaConstructor(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }

    public static void main(String[] args) {
        MahasiswaConstructor lana = new MahasiswaConstructor("lana", "TI", 412);
        lana.outData();
    }
    
}

/*
 * java tidak memiliki special method destructor. Karena semua object java yang sudah melewati blok akan di release
 * Berbeda dengan c++ yang objecntnya dapat tersimpan di heap memory. Sehingga memiliki destructor
 */