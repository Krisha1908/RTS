
var i=1
var m=1;
var power;
var num = parseInt(prompt("Enter the number :"))
console.log("num = ",num)
var power = parseInt(prompt("Enter the power :"))
console.log("power = ",power)

do
{
    m = m*num;
    i++;
}while(i<=power)
console.log("power = ",m)
