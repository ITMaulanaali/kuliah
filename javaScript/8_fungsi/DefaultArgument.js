function penjumlahan(nilaiA, nilaiB=20){
    let hasil = nilaiA + nilaiB;
    return hasil;
}

function namaKu(){
    console.log("Namaku adalah tetap orang");
}

console.log("Hasil jumlahnya adalah: " + penjumlahan(5));
namaKu();

/*
Default argumen secara sederhana hanyalah sebuah fungsi yang memiliki nilai default di parameternya.
Syarat atau aturan pemberia default parameter harus berada di paling akhir parameter
*/