package aggregation;

class Buku {
    private String judul;
    private int JumlahHalaman;
    private boolean isbn;

    Buku(String judul, int halaman, boolean isbn){
        this.judul = judul;
        this.JumlahHalaman = halaman;
        this.isbn = isbn;
    }

    void outData(){
        System.out.println(this.judul);
        System.out.println(this.JumlahHalaman);
        System.out.println(this.isbn);
    }
}
