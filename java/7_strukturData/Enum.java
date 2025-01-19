
class Enum {
    
    public static void main(String[] args) {
        

        System.out.println(warna.merah);
        System.out.println(warna.hijau);
        System.out.println(warna.biru);
    }

    static enum warna{merah, kuning, hijau, biru};
}

/*
 * enum di c++ dan java aga berbeda. Meskipun sama sama berfungsi untuk mengkoleksi data konstan
 * 
 * di java, index dari koleksi data enum tidak bisa dirubah. Ini sudah paten dimulai dari 0.
 * Dan nilai dari koleksi enum warna otomatis terinisialisasi string nilai didalam body{}
 * Pelajari lagi enum;
 */