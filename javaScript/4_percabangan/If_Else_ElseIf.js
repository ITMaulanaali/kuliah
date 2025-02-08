let inputUser = prompt("Masukkan umurmu dari 5-18 tahun");

if(inputUser >= 5 && inputUser < 10){
    console.log("Anda adalah anak kecil");
}else if(inputUser >= 10 && inputUser <= 18){
    console.log("Anda adalah remaja");
}else{
    console.log("Anda tidak memasukan range tahun dengan benar");
}


/*
pada percabangan didalam if selalu berisi operator komparasi yang akan menghasilkan true atau false yang mana ini disebut kondisi
*/