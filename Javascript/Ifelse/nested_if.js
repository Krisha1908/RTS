var num1 = parseInt(prompt("Enter the number 1:"))
console.log(num1)
var num2 = parseInt(prompt("Enter the number 2:"))
console.log(num2)
var num3 = parseInt(prompt("Enter the number 3:"))
console.log(num3)

if(num1>num2)
{
    if(num1>num3)
    {
        console.log("Num1 is biggest.")
    }
    else
    {
        console.log("Num3 is biggest")
    }
}
else
{
    if(num2>num3)
    {
        console.log("Num2 is biggest.")
    }
    else
    {
        console.log("Num3 is biggest")
    }  
}