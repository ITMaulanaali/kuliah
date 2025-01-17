package javaInterface;

import javaInterface.template.AMahasiswa;

class Main {
    public static void main(String[] args) {
        MahasiswaBiasa lana = new MahasiswaBiasa("lana","TI",412);
        lana.outData();
        lana.tampilkanNim(); System.out.println();

        lana.pullPolymorphismDosen(new DosenKaprodi("Bu Rani", "Konsep basis data", 111, "Ti"));
        lana.outDataAll(); System.out.println();

        lana.pullPolymorphismDosen(new DosenBiasa("Pak Adi", "Jaringan", 222));
        lana.outDataAll();
    }
    
}
