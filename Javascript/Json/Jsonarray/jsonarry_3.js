var company = [
    {
      name: "Google",
      employees: [
        {
          id: 101,
          name: "Steve",
          age: 32,
          salary: 10000,
          designation: "Developer",
          gender: "male",
          isMarried: true,
          child: 2,
        },
        {
          id: 102,
          name: "Seeta",
          age: 29,
          salary: 1000,
          designation: "Developer",
          gender: "female",
          isMarried: false,
          child: 0,
        },
        {
          id: 103,
          name: "rima",
          age: 36,
          salary: 12000,
          designation: "Developer",
          gender: "female",
          isMarried: true,
          child: 1,
        },
      ],
    },
    {
      name: "Microsoft",
      employees: [
        {
          id: 101,
          name: "bill",
          age: 45,
          salary: 90000,
          designation: "Developer",
          gender: "male",
          isMarried: true,
          child: 2,
        },
        {
          id: 102,
          name: "sita",
          age: 29,
          salary: 1000,
          designation: "Developer",
          gender: "female",
          isMarried: false,
          child: 0,
        },
      ],
    },
  ];
  
//1. find all employees of google
const googleEmployees = company.find((c)=>c.name=="Google")
console.log(googleEmployees)

//2 find all female employee of microsoft
const femaleEmployeeMicro = company.find((c)=>c.name=="Microsoft").employees.filter((emp)=>emp.gender=="female")
console.log(femaleEmployeeMicro)

//3) find all married employee of google
const googleEmployeesMarried = company.find((c)=>c.name=="Google").employees.filter((emp)=>emp.isMarried==true)
console.log(googleEmployeesMarried)

//4) find all employee whose salary is greater than 10000
const googleEmployeesSalary = company.find((c)=>c.name=="Google").employees.filter((emp)=>emp.salary>10000)
console.log(googleEmployeesSalary)

const microEmployeesSalary = company.find((c)=>c.name=="Microsoft").employees.filter((emp)=>emp.salary>10000)
console.log(microEmployeesSalary)

//5) find all employee from microsoft who is having child
const EmployeeMicroChild = company.find((c)=>c.name=="Microsoft").employees.filter((emp)=>emp.child!=0)
console.log(EmployeeMicroChild)

//6)find female employee from google who is single
const femaleEmployeeGoogleSingle = company.find((c)=>c.name=="Google").employees.filter((emp)=>emp.gender=="female" && emp.isMarried==false)
console.log(femaleEmployeeGoogleSingle)