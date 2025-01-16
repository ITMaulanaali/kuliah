package inheritance;

class MahasiswaSubClass extends MahasiswaSuperClass{
    MahasiswaSubClass(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
    }

    void newMethod(){
        System.out.println("Ini adalah method tambahan di subClass");
    }
}
