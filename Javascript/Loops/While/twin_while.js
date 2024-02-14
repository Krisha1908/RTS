var no=123;
var m=1;
var sum =0;
while(no>0)
{
    i=no%10;
    sum=sum+i;
    m=m*i;
    no = Math.floor(no / 10);
}
if(sum==m)
{
    console.log("Twin number")
}
else
{
    console.log("Not a twin number ")
}