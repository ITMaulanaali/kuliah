package modifier.staticFinal;

class Mahasiswa {
    private String nama;
    private static String jurusan;
    private static int nim;

    Mahasiswa(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    static void setNim(int nim){
        Mahasiswa.nim = nim;
    }

    final void setJurusan(String jurusan){
        this.jurusan = jurusan;
    }

    final static void setJurusanNim(String jurusan, int nim){
        Mahasiswa.jurusan = jurusan;
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
 * fungsi/method yang menggunakan final tidak akan bisa di overloading kembali dengan nama dan parameter sama di subClassnya
 * 
 * modifier final static artinya tidak ada subclass yang bisa mengoverride fungsi static yang mirip seperti ini dengan statement yang berbeda
 */