package polymorphism.overriding;

class MahasiswaOveriding extends MahasiswaClassUmum{
    //mengoverride variable
    private int nim;

    MahasiswaOveriding(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
        this.nim = nim;
    }

    //mengoverride method
    @Override
    void outData(){
        System.out.println(this.nim);
    }
}

/*
 * modifier private di class MahasiswaUmum tidak akan bisa diakses di class lain manapun kecuali di override seperti nim
 */