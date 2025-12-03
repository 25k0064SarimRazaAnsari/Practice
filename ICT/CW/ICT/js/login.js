function checkLogin() {
  // get values from input boxes
  var user = document.getElementById("username").value;
  var pass = document.getElementById("password").value;

  // check conditions
  if (user === "mehak" && pass === "1234") {
    alert("Login Successful!");
  } else {
    alert("Login Failed! Incorrect username or password.");
  }
}
