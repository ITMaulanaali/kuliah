
class Xor {

    public static void main(String[] args){
        boolean a = true;
        boolean b = false;

        boolean logikaXor_11 = a ^ a;
        boolean logikaXor_10 = a ^ b;
        boolean logikaXor_01 = b ^ a;
        boolean logikaXor_00 = b ^ b;

        System.out.println("Hasil logika Xor true-true adalah: " + logikaXor_11);
        System.out.println("Hasil logika Xor true-false adalah: " + logikaXor_10);
        System.out.println("Hasil logika Xor false-true adalah: " + logikaXor_01);
        System.out.println("Hasil logika Xor false-false adalah: " + logikaXor_00);
    }    
}
