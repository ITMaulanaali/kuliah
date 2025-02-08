//Syntax dasar arrow function
let penjumlahanSatu = (nilaiA, nilaiB) => {
    let hasil = nilaiA + nilaiB;
    return hasil;
}

//Jika hanya satu parameter bisa tanpa ()
let penjumlahanDua = nilaiA => {
    let nilaiB = 5;
    let hasil = nilaiA + nilaiB;
    return hasil;
}

//Jika hanya satu baris maka bisa tanpa {} dan tanpa menuliskan return
let penjumlahanTiga = (nilaiA, nilaiB) => nilaiA + nilaiB;


// console.log(penjumlahanSatu(5,5));
// console.log(penjumlahanDua(5));
console.log(penjumlahanTiga(5,5));
