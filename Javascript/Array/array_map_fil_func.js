//forEach,filter,map,reduce
//forEach will return void...
//map will return same size of an array
//filter will return based on condition
//reduce will return single value

var data = ["raj" , "kunal","parth","krisha","khushi","riya"];

// for(let i=0;i<data.length;i++){
//     console.log(data[i])
// }

// data.forEach((d)=>
// {
//     console.log(d);
// })


// data.map((d)=>{
//     console.log(d);
// })

// var upperdata = data.map((d)=>
// {
//     return d.toUpperCase();
// })

// console.log(upperdata);


// for(let i=0;i<data.length;i++)
// {
//     upperdata.push(data[i].toUpperCase());
// }

// console.log(upperdata);


// var fildata = data.filter((d)=>
// {
//     return d.length>4;
// })

// console.log(fildata);


var fildata = data.filter((d)=>d.length>4);
console.log(fildata);

var fildata1 = data.filter((d)=>d.startsWith("k")||d.startsWith("r"));
console.log(fildata1);


// for(let i =0;i<data.length;i++){

//     if(data[i].length>4){
//         filData.push(data[i])
//     }
// }