package composition;

class Mahasiswa {
    private String nama;
    private String jurusan;
    private int nim;

    private Prodi prodi;

    Mahasiswa(String nama, String jurusan, int nim, String matkul){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
        this.prodi = new Prodi("teknik informatika",matkul);
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);

        //composisi karena harus ada pada kombinasi dengan Mahasiswa(tidak akan bisa menampilkan dengan matkul jika tanpa prodi)
        System.out.println(prodi.getProdi() + " dengan matkul: " + prodi.getMatkul());
    }
}
