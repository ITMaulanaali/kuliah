package polymorphism.castingObject;

class Main {
    public static void main(String[] args) {
        MahasiswaSubClass lanaSubclass = new MahasiswaSubClass("lana", "TI", 412);
        lanaSubclass.outData();
        lanaSubclass.outNewMethod();

        System.out.println();

        //casting up Object (subclass ke superclass)
        Mahasiswa lanaSuperClass = lanaSubclass;
        lanaSuperClass.outData();

        System.out.println();

        //casting down Object (superclass ke subclass lagi)
        MahasiswaSubClass lanaSubclass2 = (MahasiswaSubClass)lanaSuperClass;
        lanaSubclass2.outData();
        lanaSubclass2.outNewMethod();
    }
}

/*
 * Casting seperti diatas tidak memberikan alamat atau atribut object. Namun mengcopy alamatNya. Sehingga kedua object merujuk pada alamat yang sama dengan typedata/class yang berbeda jenis
 * Superclass tidak akan bisa menggunakan method tambahan subclass walaupun tercasting atau merujuk pada memory yang sama
 * 
 * Cara casting langsung ke superclass sewaktu initialized bisa dilakukan dengan contoh syntax dibawah ini:
 * Mahasiswa lanaSubclass = new MahasiswaSubClass("lana", "TI", 412);
 */