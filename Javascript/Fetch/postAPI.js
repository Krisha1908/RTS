const addUser = async(user)=>
{
    // var user ={
    //     name : "krisha",
    //     age : 18,
    //     email : "krisha@gmaul.com",
    //     isActive : true
    // }

    const loader = document.getElementById("loader");
    loader.innerHTML = "LOADING.........";
    console.log("strin...",JSON.stringify(user));

    const res = await fetch("https://node5.onrender.com/user/user",{
            method : "POST",
            body : JSON.stringify(user),
            headers :{
                "Content-Type":"application/json"
            }
    })

    const data = await res.json();
    console.log(data);
    loader.innerHTML = "";
}

// addUser();


const submitHandler = (event) =>
{
    event.preventDefault();
    const name = document.getElementById("name").value;
    const age = document.getElementById("age").value;
    const email = document.getElementById("email").value;
    const isActive = document.getElementById("status").checked
    
    const user = {
        name:name,
        age:age,
        email:email,
        isActive : isActive
    }

    console.log(user);
    addUser(user);
}