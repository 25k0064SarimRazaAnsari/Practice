const prompt = require('prompt-sync')({ sigint: true });

let arr=[]

function add(){
   let temp= prompt("Enter to add: ");
   arr.push(temp);
}

function remove(){
    let temp1=prompt("Enter to remove: ");
    let index =arr.indexOf(temp1);
    arr.splice(index,1);
}

function view(){
    for (let index = 0; index < arr.length; index++) {
        console.log(arr[index]+"\n");
    }
}

function clear(){
    arr=[];
}

do {
    var choice=prompt("Add\nremove\nview\nclear\nexit");
    switch (choice) {
        case "add":
            add();
            break;
        case "remove":
            remove()
            break;
        case "view":
            view();
            break;
        case "clear":
            clear();
            break;
        case "exit":
            return 0;
            break;
    
        default:
            break;
    }
    
} while (choice!="exit");