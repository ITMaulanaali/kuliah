
class BilanganBulat{
    
    public static void main(String[] args){
        byte b = 10;
        short s = 11;
        int i = 12;
        long l = 13;

        System.out.printf("Byte b bernilai:     %d dengan range: %d Byte",b, Byte.BYTES); System.out.println();
        System.out.printf("Short s bernilai:    %d dengan range: %d Byte",s, Short.BYTES); System.out.println();
        System.out.printf("Int i bernilai:      %d dengan range: %d Byte",i, Integer.BYTES); System.out.println();
        System.out.printf("long l bernilai:     %d dengan range: %d Byte",l, Long.BYTES); System.out.println();
    }
}

/*
 * byte ->  1Byte
 * short -> 2Byte
 * int ->   4Byte
 * long ->  8Byte
 */