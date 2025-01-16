package modifier.abstractModifier;


class Main {
    public static void main(String[] args) {
        MahasiswaSubClass lana = new MahasiswaSubClass("lana","Ti",412);
        lana.outData(); System.out.println();

        lana.setDosen("Rifki");
        lana.outData();
    }
}
