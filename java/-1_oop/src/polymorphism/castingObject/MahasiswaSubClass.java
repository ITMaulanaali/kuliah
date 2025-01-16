package polymorphism.castingObject;

class MahasiswaSubClass extends Mahasiswa{

    MahasiswaSubClass(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
    }

    void outNewMethod(){
        System.out.println("Ini adalah method tambahan di subclass");
    }
}
