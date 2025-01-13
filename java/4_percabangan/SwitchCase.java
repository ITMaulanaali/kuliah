import java.util.Scanner;

class SwitchCase {
    
    public static void main(String[] args) {
        Scanner inputUser = new Scanner(System.in);
        
        System.out.println("Masukan mulai urutan dari 5-9:");
        int hasilInputan = inputUser.nextInt();

        switch(hasilInputan){
            case 5:
                System.out.println("berurut dari 5");
            case 6:
                System.out.println("berurut dari 6");
            case 7:
                System.out.println("berurut dari 7");
            case 8:
                System.out.println("berurut dari 8");
            case 9:
                System.out.println("berurut dari 9");
                break;
            default:
                System.out.println("maaf tidak ada urutan");
        }
    }
}

/*
 * Switch case hanya mendukung case nilai constan atau literal dalam percabanganya. Sehingga hasil eskpressi(komparasi 2 variable) tidak dapat dilakukan
 */
