package modifier.staticFinal;

class MahasiswaSubClass extends Mahasiswa{
    MahasiswaSubClass(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
    }

    // @Override
    // void setJurusanNim(String jurusan, int nim){

    // }
}

/*
 * tidak dapat mengoverride fungsi static dengan modifier final namun akan bisa dilakukan jika antara 2 parameter tersebut diganti typedatanya
 */