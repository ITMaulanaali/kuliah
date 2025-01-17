package javaInterface;

import javaInterface.template.IDosen;

class DosenBiasa implements IDosen{
    private String nama;
    private String matkul;
    private int nidn;

    DosenBiasa(String nama, String matkul, int nidn){
        this.nama = nama;
        this.matkul = matkul;
        this.nidn = nidn;
    }

    @Override
    public void outData(){
        System.out.println(this.nama);
        System.out.println(this.matkul);
        System.out.println(this.nidn);
    }
}
