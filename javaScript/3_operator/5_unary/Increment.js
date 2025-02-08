let a = 5;
let hasil;

hasil = a++;
console.log("Hasil variable a=5 decrement a--, simpan ke hasil: " + hasil + " nilai a: " + a);

a = 5;
hasil = ++a;
console.log("Hasil variable a=5 decrement --a, simpan ke hasil: " + hasil + " nilai a: " + a);


/*
Pada operator decrement setiap kali a-- dieksekusi itu sama saja dengan mengurangi satu -1 nilai di variabel a
terdapat 2 cara yaitu:
a++ post-increment
++a pre-decrement
*/