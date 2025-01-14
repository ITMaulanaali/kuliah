package encapsulation;

class Main {
    public static void main(String[] args) {
        MahasiswaGetterSetter lana = new MahasiswaGetterSetter("lana", "TI", 412);
        lana.outData();
        lana.gantiJurusan(522); System.out.println();
        
        System.out.println("Nim yang diambil: " + lana.getNim()); System.out.println();

        lana.outData();
    }
}

/*
 * setter scara garis besar digunakan untuk merubah suatu nilai atribut
 * sedangkan getter digunakan untuk mengambil nilainya ke class lain untuk diolah atau tampilkan
 */