import java.util.Scanner;

class InputConsole {
    
    public static void main(String[] args) {
        
        Scanner inputUser = new Scanner(System.in);

        System.out.println("dari scanner: " + inputUser.nextLine());
        System.out.println("dari argument array args: " + args[0]);
    }
}

/*
 * untuk melakukan input ke console ada 2 cara.
 * - Dengan bawaan parameter args di main method yang terhubung ke console untuk input argument ketika meng run program dengan java sdk(jre)
 * - Dengan standar library Scanner. System.in adalah class static di java.lang yang memanggil object in(hasil dari instansiasi class lain(inputStream)di class System in)
 */