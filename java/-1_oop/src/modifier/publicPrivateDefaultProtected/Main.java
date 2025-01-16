package modifier.publicPrivateDefaultProtected;

class Main {
    public static void main(String[] args) {
        MahasiswaStandarModifier lana = new MahasiswaStandarModifier("lana","TI",412);
        lana.setNim(444);
        lana.outData();
        lana.modifierKhususInherintace();

        System.out.println();

        //fungsi yang hanya bisa dipakai olehh subclass dan superclass itu sendiri
        MahasiswaSubClass lanaSubclass = new MahasiswaSubClass("lanaSubclass","IT",444);
        lanaSubclass.modifierKhususInherintace();
        
    }
}
