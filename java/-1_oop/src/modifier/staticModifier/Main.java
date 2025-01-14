package modifier.staticModifier;

class Main {
    public static void main(String[] args) {
        Mahasiswa lana = new Mahasiswa("lana", "TI", 412);
        lana.outData();
        Mahasiswa rangga = new Mahasiswa("rangga", "tbsm", 123);
        rangga.outData();
        Mahasiswa reno = new Mahasiswa("reno", "mm", 321);
        reno.outData();

        System.out.println();

        Mahasiswa.setNim(444);
        lana.outData();
        rangga.outData();
        reno.outData();
    }
}

/*
 * atribut nim diset sebagai static. Sehingga nim juga menempel pada nama Class.
 * ketika nim Class disetNimnya maka semua objet yang di instansiasi dengan class tersebut nimnya akan mengikut nim class static
 */