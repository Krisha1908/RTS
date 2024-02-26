function submitHandler(event) {
    event.preventDefault(); //action of form is prevented
    console.log("Form Submitted");
    const name = document.getElementById("name").value;
    const age = document.getElementById("age").value;
    const email = document.getElementById("email").value;
  
    const nameError = document.getElementById("nameError");
    const ageError = document.getElementById("ageError");
    const emailError = document.getElementById("emailError");
  
    const result = document.getElementById("result");
    flag =true;
  
    if (isEmpty(name)) {
      nameError.innerHTML = "Name is required";
      flag = false;
    } else {
      nameError.innerHTML = "";
    }
    if (isEmpty(age)) {
      ageError.innerHTML = "Age is required";
      flag = false;
    } else {
      ageError.innerHTML = "";
      if (age < 18) {
        ageError.innerHTML = "Age should be greater than 18";
          flag = false;
      } else {
        ageError.innerHTML = "";
      }
    }
    if (isEmpty(email)) {
      emailError.innerHTML = "Email is required";
      flag = false;
    } else {
      emailError.innerHTML = "";
    }
  
  
    if(flag){
  
          result.innerHTML = `Name: ${name} <br> Age: ${age} <br> Email: ${email}`;
          //result.innerHTML = "Name: " + name + "<br> Age: " + age + "<br> Email: " + email;
    }
  
  
  
  }
  
  
  const isEmpty = (param) => {
    if (param === "" || param === null || param === undefined) {
      return true;
    }
    return false;
  };