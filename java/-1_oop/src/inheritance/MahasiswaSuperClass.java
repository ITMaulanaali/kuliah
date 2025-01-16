package inheritance;

class MahasiswaSuperClass {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaSuperClass(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }
}
