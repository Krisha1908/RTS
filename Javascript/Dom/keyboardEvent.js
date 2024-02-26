// function GetInput()
// {
//     var name = document.getElementById("name");
//     var nameerror = document.getElementById("nameerror");
//     var output = document.getElementById("output");
//     console.log(name);

//     if(name.Value.length<=3)
//     {
//         nameerror.innerHTML = "name must be atleast 3 char";
//         name.style.outline = "1px solid red";
//     }
//     else
//     {
//         nameerror.innerHTML = "";
//         name.style.outline = "1px solid green";
//         output.innerHTML = "Hello " + name.value;
//     }
// }



function getInput(){


    //console.log("input");
    var name = document.getElementById("name")
    var nameerror = document.getElementById("nameerror");
    var output = document.getElementById("output");
    console.log(name);
    if(name.value.length<=3){
        //alert("Name must be at least 3 characters");
        nameerror.innerHTML = "Name must be at least 3 characters";
        name.style.outline = "1px solid red";
    }
    else{
        nameerror.innerHTML = "";
        // name.style.outline = "1px solid green";
        output.innerHTML = "Hello " + name.value;
    }



}