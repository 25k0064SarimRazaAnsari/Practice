/* In a programming language, variables are used to store data values.
JavaScript uses the keywords var, let and const to declare variables.
An equal sign is used to assign values to variables.*/

// How to create (Declare) variables:
var x;
let y;

// How to use (Initialize) variables:
x = 5;                           // initializing value 5
y = 6;                           // initializing value 6
let z = x + y;                  // initializing value x+y



/*
JavaScript Variables can be declared in 4 ways:

Automatically
Using var
Using let
Using const */

//=========Automatically
x = 5;
y = 6;
z = x + y;

//=========Using Var
var a;
a = 5;

//=========Using Let
let b;
b= 33

//=========Using Const
const x = 5;



// ---------------- Difference in Var and Let---------------
// You can not accidentally redeclare a variable declared with let.
let x = "John Doe";
let x = 0;

//--------------------------------------------
// can not accessed variable (created from Let) outside Scope
//--------------------------------------------
{
  let x = 2;
} // x can NOT be used here

//--------------------------------------------
// can accessed variable (created from Var) outside Scope
//--------------------------------------------
{
  var x = 2;
} // x CAN be used here