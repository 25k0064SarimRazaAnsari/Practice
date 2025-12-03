//onchange	.....An HTML element has been changed
//onclick...	The user clicks an HTML element
//onmouseover....	The user moves the mouse over an HTML element
//onmouseout....	The user moves the mouse away from an HTML element
//onkeydown....	The user pushes a keyboard key
//onload....	The browser has finished loading the page


// document.getElementById("button").addEventListener("click", clickFunction);

// function clickFunction() {
//     alert("So that's what happens when you click.");
// }


// ---------------- Event Examples ----------------

// onload
function pageLoaded() {
  alert("Page has finished loading!");
}

// onchange
function nameChanged() {
  let name = document.getElementById("nameBox").value;
  alert("Name changed to: " + name);
}

// onclick (using addEventListener)
document.addEventListener("DOMContentLoaded", function () {
  document.getElementById("button").addEventListener("click", clickFunction);
});

function clickFunction() {
  alert("So that's what happens when you click!");
}

// onmouseover
function mouseOver() {
  document.getElementById("hoverPara").style.color = "red";
  document.getElementById("hoverPara").textContent = "Mouse is over the text!";
}

// onmouseout
function mouseOut() {
  document.getElementById("hoverPara").style.color = "black";
  document.getElementById("hoverPara").textContent = "Move your mouse over this text.";
}

// onkeydown
function keyPressed() {
  alert("A key was pressed in the input box!");
}
