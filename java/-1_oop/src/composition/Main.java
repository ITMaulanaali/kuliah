package composition;

class Main {
    public static void main(String[] args) {
        Mahasiswa lana = new Mahasiswa("lana","Ti",412);
        lana.outData(); System.out.println();

        lana.pullDosen(new Dosen("Pak Adi", "Jaringan", 222));
        lana.outData();
    }
}
