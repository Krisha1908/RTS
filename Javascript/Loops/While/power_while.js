var i=1
var m=1;
var power;
var num = parseInt(prompt("Enter the number :"))
console.log("num = ",num)
var power = parseInt(prompt("Enter the power :"))
console.log("power = ",power)

while(i<=power)
{
    m = m*num;
    i++;
}
console.log("power = ",m)
