var num=263;
var sum=0;
var rem=0;
while(num>0)
{
    rem=num%10;
    sum=sum+rem;
    num=Math.floor(num/10);
}
console.log("Sum of digit = ",sum)