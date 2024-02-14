//ladder if else...




// const findGrade = (s1,s2,s3) => {

//     var total = s1 + s2 + s3
//     var avg = total / 3

//     if(avg > 70){
//         console.log("A")
//     }else if(avg > 60){
//         console.log("B")
//     }else if(avg > 50){
//         console.log("C")
//     }else if(avg > 40){
//         console.log("D")
//     }else{
//         console.log("F")
//     }



// }

//using ternary operator
var sub1 = 61
var sub2 = 61
var sub3 = 61

const findGrade1 = (s1,s2,s3) => (s1+s2+s3)/3 > 70 ? "A" : (s1 + s2 + s3 )/3 > 60 ? "B" : "C"

var ans = findGrade1(sub1,sub2,sub3)
console.log(ans);