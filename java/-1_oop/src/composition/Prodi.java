package composition;

class Prodi{
    private String prodi;
    private String matkul;

    Prodi(String prodi, String matkul){
        this.prodi = prodi;
        this.matkul = matkul;
    }

    String getMatkul(){
        return this.matkul;
    }

    String getProdi(){
        return this.prodi;
    }
}
