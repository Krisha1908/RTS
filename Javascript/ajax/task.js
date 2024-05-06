function loginPage()
{
   var email = document.getElementById("email").value;
    var password = document.getElementById("password").value;
    var btn = document.getElementById("btn");

}

const checkEmail = () =>
{
    var email = document.getElementById("email").value;
    console.log(email);

    const xhr = new XMLHttpRequest();
    xhr.open("GET","../user.json",true);
    xhr.send();
    xhr.onload = () =>
    {
        const users = JSON.parse(xhr.responseText);
        console.log(users);

        var a = users.find((user)=>user.email == email);
        console.log("a - ",a);

        if(a == undefined)
        {
            alert("Email is not Available");
        }
        else
        {
            alert("Login successfully...");
        }
    }   
}