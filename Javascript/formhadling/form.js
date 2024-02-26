function submitHandler(event) {

    event.preventDefault();

    const name = document.getElementById("name").value;
    const age = document.getElementById("age").value;
    const email = document.getElementById("email").value;

    const nameError = document.getElementById("nameError");
    const ageError = document.getElementById("ageError");
    const emailError = document.getElementById("emailError");


    if((name == "") || (age == "") || (email == ""))
    {
        alert("Name , age and email are compulsory.");
    }
    if(age<18)
    {
        alert("Age Should be greater then 18");
    }
    else
    {
        nameError.innerHTML = "Your Name is "+ name;
        ageError.innerHTML = "Your Age is "+ age;
        emailError.innerHTML = "Youe Email is "+ email;
    }
}


