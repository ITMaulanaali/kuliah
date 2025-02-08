let a = true;
let b = false;

let logikaAnd_11 = a && a;
let logikaAnd_10 = a && b;
let logikaAnd_01 = b && a;
let logikaAnd_00 = b && b;

console.log("Hasil logika AND true-true adalah: " + logikaAnd_11);
console.log("Hasil logika AND true-false adalah: " + logikaAnd_10);
console.log("Hasil logika AND false-true adalah: " + logikaAnd_01);
console.log("Hasil logika AND false-false adalah: " + logikaAnd_00);