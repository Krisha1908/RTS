lang = ["English","Gujarati","hindi","Telugu"]
console.log(lang)
// var x = lang.some((a)=>{
//     return lang.length>3
// })
// console.log(x)


var a = lang.every((b)=>
{
    return lang.length>2
})

console.log(a)