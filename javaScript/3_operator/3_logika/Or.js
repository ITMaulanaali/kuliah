let a = true;
let b = false;

let logikaOr_11 = a || a;
let logikaOr_10 = a || b;
let logikaOr_01 = b || a;
let logikaOr_00 = b || b;

console.log("Hasil logika OR true-true adalah: " + logikaOr_11);
console.log("Hasil logika OR true-false adalah: " + logikaOr_10);
console.log("Hasil logika OR false-true adalah: " + logikaOr_01);
console.log("Hasil logika OR false-false adalah: " + logikaOr_00);