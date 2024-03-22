function valid()
{
    var emp_id = document.getElementById("emp_id");
    var emp_name = document.getElementById("emp_name").value;
    var emp_age = document.getElementById("emp_age").value;
    var emp_sala = document.getElementById("emp_sala").value;
    var emp_blood = document.getElementById("emp_blood").value;
    var emp_tel = document.getElementById("emp_tel").value;
    var emp_jDate = document.getElementById("emp_jDate").value;
    var result = document.getElementById("result");

    var iderror = document.getElementById("iderror");

    if((emp_id == "") || (emp_name == "") || (emp_tel == ""))
    {
        nameerror.innerHTML = "Employee id , Employee Name and Employee Phone number are  required";
        nameerror.style.color = "red";
    }
    else if(emp_age<21)
    {
        nameerror.innerHTML = "Age should be greater than 21";
    }
    else if(emp_tel.length!=10)
    {
        nameerror.innerHTML = "Phone Number Should be 10";
    }
    else
    {
        result.innerHTML =
            "Employee ID is " + emp_id + "<br>" +
            "Employee Name is " + emp_name + "<br>" +
            "Employee Age is " + emp_age + "<br>" +
            "Employee Salary is " + emp_sala + "<br>" +
            "Employee Blood Group is " + emp_blood + "<br>" +
            "Employee Phone number is " + emp_tel + "<br>" +
            "Employee Join Date is " + emp_jDate;

    }

}

//     if((emp_id == ""))
//     {
//         iderror.innerHTML = "Employee ID is required";
//         emp_id.style.outline = "1px solid red";
//     }
//     else
//     {
//         iderror.innerHTML = "";
//         emp_id.style.outline = "1px solid green";
//     }

//     if((emp_name == ""))
//     {
//         nameerror.innerHTML = "Employee Name is required";
//         emp_name.style.outline = "1px sollid red";
//     }
//     else
//     {
//         nameerror.innerHTML = "";
//         emp_name.style.outline = "1px solid green";
//     }

// }