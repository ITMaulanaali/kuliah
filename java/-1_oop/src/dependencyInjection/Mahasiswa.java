package dependencyInjection;

class Mahasiswa{
    private String nama;
    private String jurusan;
    private int nim;

    //atribut reference object hasil inject function
    private Dosen dosen;

    Mahasiswa(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void injection(Dosen dosen){
        this.dosen = dosen;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
        try{
            dosen.outData();
        }catch(Exception e){
            System.out.println("Belum ada data di object inject dosen");
        }
        
    }


}