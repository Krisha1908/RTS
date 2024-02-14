function sum(a,b){

    return a+b;
}

const add = (x,y) =>{

    return x+y;
}

const sub = (x,y)=> x-y;


var ans = sum(10,20);
console.log(ans);

var ans1 = add(10,200);
console.log(ans1);

var ans2 = sub(100,20);
console.log(ans2);

const convert = (name) => name.toUpperCase();

var name1 = convert("ram")
console.log(name1);


var concatNames = (fname,lname)=> fname + " " + lname;
// var concatNames = (fname,lname)=> {
//     return fname + " " + lname
// }

var fullName = concatNames("ram","kumar");
console.log(fullName);