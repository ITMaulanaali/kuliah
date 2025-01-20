
class FungsiOverloading {
    
    public static void main(String[] args) {
        System.out.println(volumePersegi(2,5));
    }

    static int volumePersegi(int panjang, int lebar, int tinggi){
        int luas = panjang * lebar * tinggi;
        return luas;
    }
    
    static void volumePersegi(int panjang){
        int luas = panjang * panjang * panjang;
        System.out.println("Hasil luasnya void adalah: " + luas);
    }
    
    static double volumePersegi(double panjang){
        return panjang * panjang * panjang;
    }
}

/**
 * Overloading dapat dilakukan hanya dengan karena return typenya berbeda. Yang harusnya tidak boleh dilakukan karena tujuan overloading adalah berdasarkan beda beda parameternya
 * Overriding tidak dapat dilakukan dengan return type yang berbeda
 */