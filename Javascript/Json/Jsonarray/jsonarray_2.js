var data =
[
    {
        course : "HTML",
        students :[
            {
                id:101,
                name : "rajan",
                age : 21,
                gender : "male",
                marks : 50
            },

            {
                id:102,
                name : "raj",
                age : 22,
                gender : "male",
                marks : 90
            }
        ]
    },

    {
        course : "CSS",
        students : [
            {
                id:101,
                name:"Rajvi",
                age:21,
                gender:"female",
                marks:60
            },

            {
                id:102,
                name:"Partvi",
                age:20,
                gender:"female",
                marks:90
            },

            {
                id:103,
                name:"Ajay",
                age:22,
                gender:"male",
                marks:70
            },
        ]
    },
]

//const htmlStudents  =data.find((d)=>d.course=="HTML").students
//console.log(htmlStudents)

const cssFemalestu = data.find((d)=>d.course=="CSS").students.filter((stu)=>stu.gender=="female")
console.log(cssFemalestu)

const htmlFemalestu = data.find((d)=>d.course=="HTML").students.filter((stu)=>stu.gender=="female")
console.log(htmlFemalestu)

const totalCssmarks = data.find((d)=>d.course=="CSS").students.reduce((total,stu)=>total+stu.marks,0)
console.log(totalCssmarks)

const htmlstufil = data.find((d)=>d.course=="HTML").students.filter((stu)=>stu.age<22 && stu.gender=="male")
console.log(htmlstufil)