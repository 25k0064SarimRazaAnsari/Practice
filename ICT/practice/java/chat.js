function getFormData() {
    // 1. Text field
    let name = document.getElementById("name").value;
    console.log("Name:", name);

    // 2. Email field
    let email = document.getElementById("email").value;
    console.log("Email:", email);

    // 3. Password field
    let password = document.getElementById("password").value;
    console.log("Password:", password);

    // 4. Radio buttons
    let gender = "";
    if (document.getElementById("male").checked) {
        gender = document.getElementById("male").value;
    } else if (document.getElementById("female").checked) {
        gender = document.getElementById("female").value;
    }
    console.log("Gender:", gender);

    // 5. Checkboxes
    let hobbies = [];
    if (document.getElementById("reading").checked) {
        hobbies.push(document.getElementById("reading").value);
    }
    if (document.getElementById("sports").checked) {
        hobbies.push(document.getElementById("sports").value);
    }
    if (document.getElementById("music").checked) {
        hobbies.push(document.getElementById("music").value);
    }
    console.log("Hobbies:", hobbies.join(", "));
}
