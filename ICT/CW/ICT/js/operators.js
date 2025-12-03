/*
There are different types of JavaScript operators:

Arithmetic Operators
Assignment Operators
Comparison Operators
String Operators
Logical Operators
Bitwise Operators
Ternary Operators
Type Operators
*/

// =================== Arithmetic Operators ===================

let a = 5;
let b = 2;

let add = a + b;       // Addition
let sub = a - b;       // Subtraction
let mul = a * b;       // Multiplication
let div = a / b;       // Division
let expo = a ** b;     // Exponentiation
let modulus = a % b;   // Modulus

console.log("=== Arithmetic Operators ===");
console.log("Addition:", add, "| Type:", typeof add);
console.log("Subtraction:", sub, "| Type:", typeof sub);
console.log("Multiplication:", mul, "| Type:", typeof mul);
console.log("Division:", div, "| Type:", typeof div);
console.log("Exponentiation:", expo, "| Type:", typeof expo);
console.log("Modulus:", modulus, "| Type:", typeof modulus);

// Increment
let x = 5;
x++;
let z1 = x;
console.log("Increment (x++):", z1, "| Type:", typeof z1);

// Decrement
x = 5;
x--;
let z2 = x;
console.log("Decrement (x--):", z2, "| Type:", typeof z2);


// =================== Comparison Operators ===================

let num1 = 7;
let num2 = 6;

let greater = num1 > num2;         // Greater Than
let less = num1 < num2;            // Less Than
let equalTo = num1 == num2;        // Equal To
let notEqualTo = num1 != num2;     // Not Equal To
let greaterEqual = num1 >= num2;   // Greater Than or Equal
let lessEqual = num1 <= num2;      // Less Than or Equal

console.log("\n=== Comparison Operators ===");
console.log("num1 > num2:", greater, "| Type:", typeof greater);
console.log("num1 < num2:", less, "| Type:", typeof less);
console.log("num1 == num2:", equalTo, "| Type:", typeof equalTo);
console.log("num1 != num2:", notEqualTo, "| Type:", typeof notEqualTo);
console.log("num1 >= num2:", greaterEqual, "| Type:", typeof greaterEqual);
console.log("num1 <= num2:", lessEqual, "| Type:", typeof lessEqual);
