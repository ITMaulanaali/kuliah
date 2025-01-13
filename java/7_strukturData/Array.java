
class Array {

    public static void main(String[] args) {
        int[] arraySatuDimensi = new int[5];

        arraySatuDimensi[0] = 10;
        arraySatuDimensi[1] = 20;
        arraySatuDimensi[2] = 30;
        arraySatuDimensi[3] = 40;
        arraySatuDimensi[4] = 50;

        for (int array : arraySatuDimensi) {
            System.out.println(array);
        }

        System.out.println();

        int[][] arrayDuaDimensi = {
            {10,20,30},
            {40,50,60},
            {70,80,90}};

        for (int[] alamatArray : arrayDuaDimensi) {
            for (int arrayDua : alamatArray) {
                System.out.print(arrayDua);
            }
            System.out.println();
        }

    }
    
}

/*
 * array di java tidak perlu library tambahan karena merupakan tipe data bawaan java.lang yang terimport otomatis
 */