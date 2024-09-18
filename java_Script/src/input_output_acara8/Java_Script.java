package input_output_acara8;

import java.util.Scanner;

public class Java_Script {

    public static void main(String[] args) {
        
        Scanner perhitungan = new Scanner(System.in);
        
        //variable hasilBilangan saat assigned by bilangan1 + bilanagan2 terdeteksi error conversi dari int ke byte
        byte bilangan1, bilangan2, hasilBilangan; 
        
        System.out.print("Tolong masukan bilangan1: ");
        bilangan1 = perhitungan.nextByte();
        
        System.out.print("Tolong masukan bilangan2: ");
        bilangan2 = perhitungan.nextByte();
        
        //Ternyata pada pemrograman java script. hasil dari operasi byte dengan byte baik pengurangan atau penjumlahan akan menghasilkan type data int. begitu pula dengan bahasa pemrograman lain seperti c++. Namun di c++ kita bisa lagsung assign type data int itu ke byte tanpa casting(atau pemancingan seperti menggunakan string di program hidroponik). Sedankan di program lain seperti java perlu di casting untuk merubah ke int kemudian di assigne ke hasilBilangan
        hasilBilangan = bilangan1 + bilangan2;
        System.out.println(hasilBilangan);
        
    }
    
}