var lang = ["english","gujarati","hindi","bengali","punjabi"]
console.log(lang)

// lang.splice(1,1)//1st index and 1 ==> delete count
// console.log(lang)

// lang.splice(1,1,"Telugu","KAnnad") //1st index and 1 ==> delete count , kannada and telugu ==> add
// console.log(lang)

// lang.splice(2,0)
// console.log(lang)

var removelm = lang.splice(2,1,"kathiyawadi")
console.log("removing elements = "+removelm)
console.log(lang)


