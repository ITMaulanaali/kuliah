package dependencyInjection;

class Main{
    public static void main(String[] args) {
        Dosen dosenKu = new Dosen("Pak Adi", "PBO", 222);
        Mahasiswa lana = new Mahasiswa("lana", "Ti", 412);
        
        lana.outData(); System.out.println();

        lana.injection(dosenKu);
        lana.outData();
    }
}

/*
 * secara sederhana adalah menginject atau memeasukan object lain kedalam object lainnya
 */