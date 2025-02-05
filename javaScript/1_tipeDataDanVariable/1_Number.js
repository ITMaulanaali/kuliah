let numberInt = 10; //Number desimal hanya dapat maksimal 15 digit
let numberMin = -10;
let numberBigInt = 1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000n;
let numberPecahan = 1.45;
let numberEskponen = 123e5;

console.log(numberInt);
console.log(numberMin);
console.log(numberBigInt);
console.log(numberPecahan);
console.log(numberEskponen);

/**
 * JavaScript menggunakan alokasi 64bit/8byte untuk number
 * tapi tidak terbatas untuk type data BigInt dengan memberikan n dibelakang angka
 */
