
class FungsiOverloading {
    
    public static void main(String[] args) {
        System.out.println(luasPersegi(2,5));
    }

    static int luasPersegi(int panjang, int lebar){
        int luas = panjang * lebar;
        return luas;
    }
    
    static void luasPersegi(int sisi){
        int luas = sisi * sisi;
        System.out.println("Hasil luasnya void adalah: ");
    }
    
    static double luasPersegi(double sisi){
        return sisi * sisi;
    }
}
