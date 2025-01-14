package javaClass;

class MahasiswaClass {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaClass(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void outData(){
        System.out.println(nama);
        System.out.println(jurusan);
        System.out.println(nim);
    }
}
