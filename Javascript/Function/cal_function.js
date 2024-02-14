choice = prompt("Enter 1 for add \n Enter 2 for sub \n Enter 3 for mul \n Enter 4 for div\n ")

function add(a,b)
{
    let c = a+b;
    return c;
}
function sub(a,b,c)
{
    let x = a - b - c;
    return x;
}
function mul(a,b)
{
    let c = a*b;
    return c;
}
function div(a,b)
{
    let x = a/b;
    return x;
}


switch(choice)
{
    case "1":
        var a = parseInt(prompt("Enter the value of a:"))
        var b = parseInt(prompt("Enter the value of b:"))

        var ans_add = add(a,b)
        alert("Answer of add = "+ans_add)
        break;

    case "2":
        var a = parseInt(prompt("Enter the value of a:"))
        var b = parseInt(prompt("Enter the value of b:"))
        var c = parseInt(prompt("Enter the value of c:"))

        var ans_sub = sub(a,b,c)
        alert("Answer of sub = "+ans_sub)
        break;

    case "3":
        var a = parseInt(prompt("Enter the value of a:"))
        var b = parseInt(prompt("Enter the value of b:"))

        var ans_mul = mul(a,b)
        alert("Answer of mul = "+ans_mul)
        break;

    case "4":
        var a = parseInt(prompt("Enter the value of a:"))
        var b = parseInt(prompt("Enter the value of b:"))

        var ans_div = div(a,b)
        alert("Answer of div = "+ans_div)
        break;        

}

