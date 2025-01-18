package aggregation;

class Main {
    public static void main(String[] args) {
        Mahasiswa lana = new Mahasiswa("lana", "TI", 412, new Buku("PBO",500,true));
        // Mahasiswa lana = new Mahasiswa("lana", "TI", 412, null);
        lana.outData();
    }
}

/*
 * parameter untuk hubungan aggregation(kuliah) dapat tidak diberikan atau null. Dan object lana dari class mahasiswa masih bisa digunakan
 */