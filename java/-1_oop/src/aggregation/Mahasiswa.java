package aggregation;

class Mahasiswa {
    private String nama;
    private String jurusan;
    private int nim;

    private Buku kuliah;

    Mahasiswa(String nama, String jurusan, int nim, Buku kuliah){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
        this.kuliah = kuliah;
    }

    void outData(){
        System.out.println("Mahasiswa dibawah ini:");
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);

        if(kuliah != null){
            System.out.println("Memiliki buku pengangan:");
            kuliah.outData();
        }else{
            System.out.println("Tidak memiliki buku pengangan.");
        }
    }
}

/*
 * aggregation cardinalitynya lebih lemah daripada composition. Artinya class penyusun(kelass ini) Masih dapat hidup dan digunakan walaupun class agregatian(kuliah) tidak ada(dapat null)
 */