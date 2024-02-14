// var data = "naman";
// var temp=""
// for(let i=data.length-1;i>=0;i--)
// {
//     console.log(data[i])
//     // temp = temp + data[i]
//     temp = temp.concat(data[i])
// }
// console.log(temp)
// if(temp==data)
// {
//     console.log("Palidrome")
// }
// else
// {
//     console.log("not a palidrome")
// }

// uppercase without function
var a = "krisha"
var upperdata = ""
for(let i=0;i<=a.length;i++)
{
    if(a.codePointAt(i)>=97 && a.codePointAt(i)<=122)
    {
        upperdata = upperdata.concat(String.fromCharCode(a.codePointAt(i)-32))
    }    
}
console.log(upperdata)