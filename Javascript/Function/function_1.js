function test()
{
    console.log("Function test called....")
    console.log("without return type and without parameters / arguments")
}

test();


//with return type and with parameters / arguments
function add(a,b)
{
    let c = a+b;
    return c;
}

var ans = add(10,40);
console.log("add = "+ans)


 //without return type and with parameters / arguments
function sub(a,b,c)
{
    let x = a - b - c;
    console.log("sub = "+x);
}
sub(100,30,20);//cant store...cz no return type


function getData(){


    return "Hi this is India"
}
var data = getData()
console.log("Data = ", data);