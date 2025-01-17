package javaInterface;

import javaInterface.template.AMahasiswa;

class MahasiswaBiasa extends AMahasiswa{
    MahasiswaBiasa(String nama, String jurusan, int nim){
        super(nama,jurusan,nim);
    }

    @Override
    public void tampilkanNim(){
        System.out.println(getNim());
    }
}

/*
 * modifier untuk override tidak boleh reduce atau visibilitynya lebih rendah dari abstract method yang di implementasikan superclassnya
 */