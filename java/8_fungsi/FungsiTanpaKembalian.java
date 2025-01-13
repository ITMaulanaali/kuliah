
class FungsiTanpaKembalian {
    
    public static void main(String[] args) {
        penjumlahan(5,5);
        namaKu();
    }

    //fungsi dengan parameter
    static void penjumlahan(int nilaiA, int nilaiB){
        int hasil = nilaiA + nilaiB;
        System.out.println("penjumlahan dari keduanya adalah: " + hasil);
    }

    //fungsi tanpa parameter
    static void namaKu(){
        System.out.println("Namaku adalah orang");
    }
}
