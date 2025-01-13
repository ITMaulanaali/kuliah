class Var {
    
    public static void main(String[] args) {
        var a = 10;        // int
        var b = 20.234;    // double
        var c = 'c';       // char, harus menggunakan Character jika ingin menggunakan getClass
        var d = "halo";    // String

        System.out.println(((Object)a).getClass().getName());  // Untuk tipe primitif seperti int
        System.out.println(((Object)b).getClass().getName());  // Untuk tipe primitif seperti double
        System.out.println(((Object)c).getClass().getName());  // Untuk tipe primitif char
        System.out.println(d.getClass().getName());            // Untuk String
    }
}

/*
 * Var seperti auto di c++ untuk secara otomatis memetakan type data sesuai nilai yang di inisialisasinya
 */
