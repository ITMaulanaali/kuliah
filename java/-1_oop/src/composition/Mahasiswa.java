package composition;

class Mahasiswa {
    private String nama;
    private String jurusan;
    private int nim;

    private Dosen dosen;

    Mahasiswa(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void pullDosen(Dosen dosen){
        this.dosen = dosen;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
        try{
            System.out.println("object dosen sudah memiliki reference alamat dan memanggil datanya:");
            dosen.outData();
        }catch(Exception e){
            System.out.println("belum ada object dosen yang dimasukan");
        }
    }
}
