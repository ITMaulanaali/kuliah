package modifier.abstractModifier;

class MahasiswaSubClass extends MahasiswaAbstractClass{
    private String dosen;

    MahasiswaSubClass(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
    }

    @Override
    void setDosen(String dosen){
        this.dosen = dosen;
    }

    @Override
    void outData(){
        super.outData();
        System.out.println(this.dosen);
    }
}

/*
 * subClass wajib mengoverride method abstract sebagai template dari superclass
 */