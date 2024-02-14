var i;
var k;
var sum=0;
var num=parseInt(prompt("Enter the number:"))
console.log(num)
var k=num;
while(num=!0)
{
    i=num%10;
    sum=sum+(i*i*i);
    num = Math.floor(num / 10);
}
if(sum==k)
{
    console.log("It is armstrong num");
}
else
{
    console.log("It is not armstrong num");
}