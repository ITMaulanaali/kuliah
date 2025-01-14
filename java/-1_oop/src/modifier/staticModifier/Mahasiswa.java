package modifier.staticModifier;

class Mahasiswa {
    private String nama;
    private String jurusan;
    private static int nim;

    Mahasiswa(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    static void setNim(int nim){
        Mahasiswa.nim = nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(Mahasiswa.nim);
    }

}

/*
 * fungsi/method yang menggunakan static. Semua statement didalamnya juga harus nilai dari atribut static
 */