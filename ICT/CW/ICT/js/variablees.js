/* 
In a programming language, variables are used to store data values.
JavaScript uses the keywords var, let, and const to declare variables.
An equal sign is used to assign values to variables.
*/

// ---------------- How to create (Declare) variables ----------------
var x;
let y;

// ---------------- How to use (Initialize) variables ----------------
x = 5;                           // initializing value 5
y = 6;                           // initializing value 6
let z = x + y;                   // initializing value x + y
console.log("x + y =", z);


/*
JavaScript Variables can be declared in 4 ways:
1. Automatically
2. Using var
3. Using let
4. Using const 
*/

// ========= Automatically =========
x = 5;
y = 6;
z = x + y;
console.log("Automatic Declaration:", z);

// ========= Using var =========
var a;
a = 5;
console.log("Using var:", a);

// ========= Using let =========
let b;
b = 33;
console.log("Using let:", b);

// ========= Using const =========
const c = 5;
console.log("Using const:", c);




// ---------------- Difference between var and let ----------------

// ❌ You cannot redeclare a variable declared with 'let' in the same scope
let name1 = "John Doe";
// let name1 = 0; // ❌ Uncommenting this line will cause an error






// ---------------- Scope Difference ----------------

// let - block scoped
{
  let letVar = 2;
  console.log("Inside block (letVar):", letVar);
}



console.log(letVar); // ❌ Uncommenting will cause an error (letVar not accessible)



// var - function/global scoped
{
  var varVar = 2;
  console.log("Inside block (varVar):", varVar);
}
console.log("Outside block (varVar):", varVar);
