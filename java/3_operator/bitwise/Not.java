
class Not {
    
    public static void main(String[] args){
        int a = 3; String bitA;
        int hasil = ~a;
        String bitHasil;
        
        bitA = String.format("%8s", Integer.toBinaryString(a)).replace(' ', '0');
        bitHasil = String.format("%8s", Integer.toBinaryString(hasil)).replace(' ','0');

        bitHasil = bitHasil.substring(bitHasil.length() -8);
        System.out.println("Hasil bitwise not variable a adalah:");
        System.out.println(bitA);
        System.out.println(bitHasil);
    }   
}
