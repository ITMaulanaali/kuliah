package polymorphism.overloading;

class MahasiswaConstructorOverloading {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaConstructorOverloading(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    MahasiswaConstructorOverloading(String nama){
        this.nama = nama;
        this.jurusan = "otomatis TI";
        this.nim = 222;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }
}

/*
 * Menimpa constructor didalam class disebut overload karena compiler akan mengload lebih dari sekali constructor mana yang harusnya digunakan
 */
