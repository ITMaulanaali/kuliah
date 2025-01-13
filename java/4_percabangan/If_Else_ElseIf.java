import java.util.Scanner;

class If_Else_ElseIf {
    
    public static void main(String[] args){
        Scanner inputUser = new Scanner(System.in);        

        System.out.println("Masukan umurmu dari 5-18 tahun: ");
        int hasilInputan = inputUser.nextInt();

        if(hasilInputan >= 5 && hasilInputan < 10){
            System.out.println("anda masih anak kecil");
        }else if(hasilInputan >= 10 && hasilInputan <= 18){
            System.out.println("anda sudah remaja");
        }else{
            System.out.println("anda tidak memasukan rentang tahun dengan benar");
        }
    }
}
