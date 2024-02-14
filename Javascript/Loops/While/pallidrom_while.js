var no=1221;
var no1;
var i;
var sum=0;
no1=no;
while(no>0)
{
    i=no%10;
    sum=(sum*10)+i;
    no = Math.floor(no / 10);
}
if(sum==no1)
{
    console.log("palindrome no.");
}
else
{   
    console.log("Not palindrome no.")
}    
