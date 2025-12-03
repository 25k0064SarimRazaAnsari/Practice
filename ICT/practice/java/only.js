let name=["ali","amna","ahmed"];

name.push("sarim")

name.push(84);  //add

name.pop(); //remove last

name.splice(2,1) //remove index 2 till 1???

let find=name.indexOf("amna"); //search elemnt
console.log(find);

for (let index = 0; index < name.length; index++) {
    console.log(name[index]);
}