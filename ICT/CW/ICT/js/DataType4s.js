/*
JavaScript has 8 Data Types:
1. String
2. Number
3. Bigint
4. Boolean
5. Undefined
6. Null
7. Symbol
8. Object

The Object type can be:
1. Object
2. Array
3. Date
*/

// Numbers
let length = 16;
let weight = 7.5;

// Strings
let color = "Yellow";
let lastName = "Johnson";

// Booleans
let x = true;
let y = false;

// Undefined
let notDefined;

// Null
let emptyValue = null;

// BigInt
let bigNum = 1234567890123456789012345678901234567890n;

// Symbol
let sym = Symbol("id");

// Object
const person = { firstName: "John", lastName: "Doe" };

// Array Object
const cars = ["Saab", "Volvo", "BMW"];

// Date Object
const date = new Date("2022-03-25");

// Output all with types
const outputDiv = document.getElementById("output");

function showType(name, value) {
  const type = typeof value;
  console.log(`${name} = ${value} (${type})`);
  outputDiv.innerHTML += `<p><b>${name}</b> = ${value} <i>(${type})</i></p>`;
}

showType("length", length);
showType("weight", weight);
showType("color", color);
showType("lastName", lastName);
showType("x", x);
showType("y", y);
showType("notDefined", notDefined);
showType("emptyValue", emptyValue);
showType("bigNum", bigNum);
showType("sym", sym.toString());
showType("person", JSON.stringify(person));
showType("cars", cars.join(", "));
showType("date", date);
