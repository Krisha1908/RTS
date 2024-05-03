var user = 
    [
        {
            email : "krisha@gmail.com",
            password : "123@123",

        },
        {
            email : "khushi@gmail.com",
            password : "456@456",

        },
        {
            email : "riya@gmail.com",
            password : "789@789",

        },
]

function loginPage()
{
   var email = document.getElementById("email").value;
    var password = document.getElementById("password").value;
    var btn = document.getElementById("btn");
var x = user.find((u)=>{
   return u.email == email && u.password== password;
})

if(x)
{
    alert("Login Sucessful!!");
    document.cookie = email;

}
else
{
    alert("INVALID.....Try again!.....");
}  
   
}
    


loginPage();