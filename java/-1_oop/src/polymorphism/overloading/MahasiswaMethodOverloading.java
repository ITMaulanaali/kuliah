package polymorphism.overloading;

class MahasiswaMethodOverloading {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaMethodOverloading(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void setNim(int nim){
        this.nim = nim;
    }

    void setNim(int nimA, int nimB){
        this.nim = nimA + nimB;
    }

    int setNim(){
        return this.nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }
}
