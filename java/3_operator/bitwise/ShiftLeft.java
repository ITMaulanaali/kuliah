
class ShiftLeft {
    
    public static void main(String[] args){
        int a = 3; String bitA;
        int hasil = a << 3;
        String bitHasil;
        
        bitA = String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0');
        bitHasil = String.format("%8s", Integer.toBinaryString(hasil)).replace(' ','0');

        System.out.println("Hasil bitwise << sebanyak 3 variable a adalah:");
        System.out.println(bitA);
        System.out.println(bitHasil);
    }   
}
