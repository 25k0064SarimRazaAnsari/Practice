function start(event) {

    let user = document.getElementById("user").value;
    let pass = document.getElementById("pass").value;

    if (user == "sarim@gmail.com") {
        if (pass == 1234)
            document.getElementById("result").innerHTML = "Login";
        else document.getElementById("result").innerHTML = "wrong pass";
    } else {
        document.getElementById("result"), innerHTML = "Wrong user";
    }
}

function signup(){
    let name=[];
    let pass=[];

    
}

function screen2(){
    window.location.href="signup.html";
}

function screen1(){
    window.location.href="login.html";
}
