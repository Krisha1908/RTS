var students = [
    {
        name:"khushi",
        id :101,
        age :19,
        subjects:["maths","science","english"]
    },

    {
        name : "krisha",
        id : 102,
        age :17,
        subjects:["maths","english"]
    },

    {
        name : "riya",
        id :103,
        age : 20,
        subjects:["maths","science","english"]
    },
]

// console.log(students);

// for(let i=0;i<students.length;i++){


//         console.log(students[i].name)


// }


//FOREACH.......
// students.forEach((stu)=>
// {
//     console.log(stu.name);
//     console.log(stu.age);
//     console.log(stu.id);
// })

//MAP........ 
// var student = students.map((stu)=>
// {
//     return stu.name;
// })
// console.log(student);


//MAP ADD NEW OBJECT......
// var newObStu = students.map((stu)=>
// {
//     return(
//         {
//             studentID:stu.id-100,
//             studentName:stu.name.toUpperCase(),
//             studentAge:stu.age + 10,
//         }
//     )
// })
// console.log(newObStu);



//NESTED FOREACH.....
students.forEach((stu)=>
{
    console.log(stu)
    stu. students.forEach((sub)=>
    {
        console.log(sub);
    })
})
