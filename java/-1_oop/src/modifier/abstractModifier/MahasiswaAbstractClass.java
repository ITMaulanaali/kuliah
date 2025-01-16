package modifier.abstractModifier;

abstract class MahasiswaAbstractClass {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaAbstractClass(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    abstract void setDosen(String dosen);

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }
}

/*
 * Class abstract tidak dapat dibuat object (initialized)
 * Method yang mengimplementasikan abstract maka classnya juga harus abstract
 * method yang mengimplementasikan abstract tidak dapat memiliki body
 */
