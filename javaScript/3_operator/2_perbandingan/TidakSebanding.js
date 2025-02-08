let a = 5;
let b = 5;
let hasil = a != b;
let hasil2 = a != "5";

console.log(hasil);
console.log(hasil2);

/**
 * perhatikan bahwa != tidak mengecek type datanya apa. Sehingga string 5 dikira adalah 5 juga sehingga perbandingan false keduanya
 */