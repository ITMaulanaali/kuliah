package javaInterface.template;

public interface IDosen {
    
    public void outData();
}

/*
 * interface hanya digunakan sebagai template struktur program. Biasanya dipadukan dengan abstract sebagai has-a
 * 
 * atribut nama secara otomatis menjadi konstan/literal (harus di inisialisasi).
 * Fungsi/method secara otomatis menjadi abstract.
 * 
 * pada implementasinya tidak memiliki atribut,
 * berlaku is-a ke subClassnya
 * interface dapat diinstansiasi
 * 
 * interface tidak mengizinkan visibility atau modifier protected. Padahal akan bagus jika apapun modifiernya yang penting implementasi di subclass dapat di overrid eke public. Sehingga reference atau casting alamat subclass ke superClass(IDosen) pemanggilan fungsi abstraknya akan tetap mengikuti hasil overrid di subclass
 */