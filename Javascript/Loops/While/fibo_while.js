var num=parseInt( prompt("Enter the number : "));
var ft = 0;
var st = 1;
var i = 1;
var nt;
while (i <= num)
{
    console.log(ft);

    nt = ft + st;
    ft = st;
    st = nt;

    i++;
}
