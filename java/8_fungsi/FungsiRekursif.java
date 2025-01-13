
class FungsiRekursif {
    
    public static void main(String[] args) {
        // penjumlahanRekursif(5, 5);
        System.out.println(perkalianFibonacciRekursif(2, 3));
    }

    static int penjumlahanRekursif(int a, int b){
        return a + penjumlahanRekursif(a,b-1);
    }
    
    static int perkalianFibonacciRekursif(int a, int b){
        if(b==0){
            return a;
        }else{
            return a * perkalianFibonacciRekursif(a,--b);
        }
    }
}
