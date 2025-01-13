
class FungsiDenganKembalian {
    
    public static void main(String[] args) {
        System.out.println(penjumlahan(5,5));
        System.out.println(namaKu());
    }

    //mengreturn int hasil
    static int penjumlahan(int nilaiA, int nilaiB){
        int hasil = nilaiA + nilaiB;
        return hasil;
    }

    //mengreturn string nama
    static String namaKu(){
        String nama = "Namaku adalah tetap orang";
        return nama;
    }
}
