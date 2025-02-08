let penjumlahan = function(nilaiA, nilaiB){
    let hasil = nilaiA + nilaiB;
    return hasil;
}

let namaKu = function(){
    console.log("Namaku adalah tetap orang");
}

console.log("Hasil jumlahnya adalah: " + penjumlahan(5,5));
namaKu();


/**
 * Pada javascript pembuata function aga berbeda. tidak perlu ada type data pada namaFungsi dan parameternya, baik yang mengembalikan nilai maupun tidak. Karena semua nilainya akan selalu menggunakan let
 */