
class ShiftRight {
    
    public static void main(String[] args){
        int a = 3; String bitA;
        int hasil = a >> 1;
        String bitHasil;
        
        bitA = String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0');
        bitHasil = String.format("%8s", Integer.toBinaryString(hasil)).replace(' ','0');

        System.out.println("Hasil bitwise >> sebanyak 1 variable a adalah:");
        System.out.println(bitA);
        System.out.println(bitHasil);
    }   
}
