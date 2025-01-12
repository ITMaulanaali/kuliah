
class Or {
    
    public static void main(String[] args){
        boolean a = true;
        boolean b = false;

        boolean logikaOr_11 = a || a;
        boolean logikaOr_10 = a || b;
        boolean logikaOr_01 = b || a;
        boolean logikaOr_00 = b || b;

        System.out.println("Hasil logika OR true-true adalah: " + logikaOr_11);
        System.out.println("Hasil logika OR true-false adalah: " + logikaOr_10);
        System.out.println("Hasil logika OR false-true adalah: " + logikaOr_01);
        System.out.println("Hasil logika OR false-false adalah: " + logikaOr_00);
    }
}

