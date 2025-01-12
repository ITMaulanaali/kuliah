
class And {
    
    public static void main(String[] args){
        boolean a = true;
        boolean b = false;

        boolean logikaAnd_11 = a && a;
        boolean logikaAnd_10 = a && b;
        boolean logikaAnd_01 = b && a;
        boolean logikaAnd_00 = b && b;

        System.out.println("Hasil logika AND true-true adalah: " + logikaAnd_11);
        System.out.println("Hasil logika AND true-false adalah: " + logikaAnd_10);
        System.out.println("Hasil logika AND false-true adalah: " + logikaAnd_01);
        System.out.println("Hasil logika AND false-false adalah: " + logikaAnd_00);
    }
}
