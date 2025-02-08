let a = -3;
let hasil = a >>> 2;

console.log("A = " + a);
console.log(a.toString(2).padStart(8,'0'));

console.log("perbandingan shiftLeft(<<) sebanyak 2 adalah: ");

console.log(hasil.toString(2).padStart(8,'0'));
console.log("Hasil = " + hasil);

/**
 * pada shifRight 3 kali itu pada dasarnya bilangan negatif bitnya juga negatif -1-1...
 * Sehingga shiftRight kekanan 3 kali juga akan menggeser bit negeatifnya. Dan ini hanya berlaku untuk shiftRight
 */