package polymorphism.overriding;

class Main {
    public static void main(String[] args) {
        MahasiswaClassUmum lana = new MahasiswaOveriding("lana", "TI", 412);
        lana.outData();
    }
}

/*
 * karena class MahasiswaOverriding is a atau subclass dari parent class MahasiswaClassUmum maka initializednya bisa seperti itu.
 * Dan itu termasuk up castingObject diawal
 */
