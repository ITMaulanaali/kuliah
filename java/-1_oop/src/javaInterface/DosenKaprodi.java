package javaInterface;

import javaInterface.template.IDosen;

class DosenKaprodi implements IDosen{
    private String nama;
    private String matkul;
    private int nidn;

    private String adminProdi;

    DosenKaprodi(String nama, String matkul, int nidn, String prodi){
        this.nama = nama;
        this.matkul = matkul;
        this.nidn = nidn;
        this.adminProdi = prodi;
    }

    @Override
    public void outData(){
        System.out.println(this.nama);
        System.out.println(this.matkul);
        System.out.println(this.nidn);
        System.out.println(this.adminProdi);
    }
}


