package modifier.publicPrivateDefaultProtected;

public class MahasiswaStandarModifier {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaStandarModifier(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }

    protected void modifierKhususInherintace(){
        System.out.println("Modifier protected ini private tapi dikecualikan untuk subClass yang mengextends");
    }

    public void setNim(int nim){
        this.nim = nim;
    }
}

/*
 * private  hanya dapat diakses di class tersebut seperti this.nim. Class lain tidak akan bisa akses this.nim walaupun menggunakan static(nama kelass dan variable privatenya)
 * public   dapat diakses dari class lain dan dari package manapun di suatu object
 * default  dapat diakses didalam package yang sama saja. Disini constructor adalah default. Sehingga meskipun class disini public dan dapat diakses diluar package. Itu akan percuma karena tidak bisa memasukan data ke object melalui constructor
 * protected hanya dapat diakses oleh subClass yang menginherit
 */