function checkEmail()
{
    var Emaildata = ["krisha123@gmail.com","riya123@gmail.com","khushi123@gmail.com"];

    var email = document.getElementById("email");
    var emailerror = document.getElementById('emailerror');
    console.log(email.value);

    if(Emaildata.includes(email.value))
    {
        emailerror.innerHTML = "Email is already taken..";
        email.style.outline = "4px solid red";
    }
    else{
        emailerror.innerHTML = "email is available";
        email.style.outline = "1px solid green";
    }

}


// function divblur(){
//     alert("blur");
// }