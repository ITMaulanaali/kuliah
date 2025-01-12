
class And {

    public static void main(String[] args){
        int a = 3; String bitA;
        int b = 6; String bitB;
        int hasil = a & b;
        String bitHasil;
        
        bitA = String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0');
        bitB = String.format("%8s", Integer.toBinaryString(b)).replace(' ', '0');
        bitHasil = String.format("%8s", Integer.toBinaryString(hasil)).replace(' ','0');

        System.out.println("Hasil bitwise and variable a dan b adalah:");
        System.out.println(bitA);
        System.out.println(bitB);
        System.out.println(bitHasil);
    }   
}
