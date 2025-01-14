package encapsulation;

class MahasiswaGetterSetter {
    private String nama;
    private String jurusan;
    private int nim;

    MahasiswaGetterSetter(String nama, String jurusan, int nim){
        this.nama = nama;
        this.jurusan = jurusan;
        this.nim = nim;
    }

    //setter
    void gantiJurusan(int nim){
        while(nim >= 10){
            nim = nim / 10;
        }
        
        if(nim==1){
            this.jurusan = "arsitek";
        }else if(nim==2){
            this.jurusan = "management";
        }else if(nim==3){
            this.jurusan = "akuntan";
        }else if(nim==4){
            this.jurusan = "teknik informatika";
        }else if(nim==5){
            this.jurusan = "teknik mesin";
        }else if(nim==6){
            this.jurusan = "fisika";
        }else if(nim==7){
            this.jurusan = "agroindustri";
        }else if(nim==8){
            this.jurusan = "matematika";
        }else if(nim==9){
            this.jurusan = "biologi";
        }else{
            System.out.println("salah memasukan");
        }
    }

    //getter
    int getNim(){
        return this.nim;
    }

    void outData(){
        System.out.println(this.nama);
        System.out.println(this.jurusan);
        System.out.println(this.nim);
    }
}
