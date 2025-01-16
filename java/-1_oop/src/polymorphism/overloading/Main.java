package polymorphism.overloading;

class Main {
    public static void main(String[] args) {
        MahasiswaConstructorOverloading lanaConstructor1 = new MahasiswaConstructorOverloading("lanaConstructor1","TI",412);
        lanaConstructor1.outData();
        MahasiswaConstructorOverloading lanaConstructor2 = new MahasiswaConstructorOverloading("lanaConstructor2");
        lanaConstructor2.outData();

        System.out.println();

        MahasiswaMethodOverloading lanaMethod = new MahasiswaMethodOverloading("lanaMethod", "TI", 412);
        lanaMethod.outData();

        lanaMethod.setNim(412, 111);
        lanaMethod.outData();

        lanaMethod.setNim(333);
        lanaMethod.outData();

        System.out.println("Nilai nim dari overloading tanpa argument adalah: " + lanaMethod.setNim());
    }
}
