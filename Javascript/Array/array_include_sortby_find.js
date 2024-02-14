var user = ["krisha","khushi","riya","ram","sita","hanuman"]
console.log(user)

// var a = user.includes("sita")
// console.log(a)

var b = user.find((u)=>
{
    return u == "krisha";
})
console.log(b)


function usersortby(a,b)
{
    return a.length - b.length
}

user.sort(usersortby)

console.log(user)

