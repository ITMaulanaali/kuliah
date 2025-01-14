package refrensiObject;

class Main {
    public static void main(String[] args) {
        Mahasiswa lana = new Mahasiswa("lana", "TI", 412);
        lana.outData();

        System.out.println();

        Mahasiswa rangga = lana;
        rangga.outData();

        System.out.println();
        System.out.println("Alamat memory argument lana: " + Integer.toHexString(System.identityHashCode(lana)));
        System.out.println("Alamat memory argument rangga: " + Integer.toHexString(System.identityHashCode(rangga)));
    }
}

/*
 * alamat memory lana di assignt ke object rangga(refrencing). Sehingga baik object lana atapun rangga merujuk kealamat memory object yang sama
 * sehingga kedua object tersebut memiliki nilai yang sama yang disimpan pada satu alamat memory yang dirujuk
 */