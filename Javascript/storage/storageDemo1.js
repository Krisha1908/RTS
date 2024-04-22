// function storeData()
// {
//     localStorage.setItem("id",101);
//     localStorage.setItem("name","Ravi");

//     sessionStorage.setItem("id",102);
//     sessionStorage.setItem("name","kishan");

//     // var user = {
//     //     id:1,
//     //     name:"Royal",
//     // }

//     // localStorage.setItem("user",JSON.stringify(user))
// }

// function removeData(){

//     // localStorage.removeItem("id")
//     // localStorage.removeItem("name")

//     // sessionStorage.removeItem("id")
//     // sessionStorage.removeItem("name")

//    localStorage.clear()
//    sessionStorage.clear();


// }

// function getData()
// {
//     var id = localStorage.getItem("id");
//     console.log("Id =  ",id);
//     var id = localStorage.getItem("name");
//     console.log("name =  ",name);
//     var user = localStorage.getItem("user")
//     console.log("User =  ",user) ;

//     var userOBJ = JSON.parse(user);
//     console.log("User is ",userOBJ)
//     console.log(userOBJ.name)
//     console.log(typeof userOBJ)


// }


function storeData(){

    //string only we can store in any storage..
    localStorage.setItem("id",101)
    localStorage.setItem("name","Ravi")

    sessionStorage.setItem("id",102)
    sessionStorage.setItem("name","Ramesh")
    var user = {
        id:1,
        name:"Ravi",
    }

    //localStorage.setItem("user",user)
    localStorage.setItem("user",JSON.stringify(user))

}

function removeData(){

    localStorage.removeItem("id")
    localStorage.removeItem("name")

    sessionStorage.removeItem("id")
    sessionStorage.removeItem("name")

    // localStorage.clear()
    // sessionStorage.clear()


}


function getData(){


    var id = localStorage.getItem("id")
    console.log("Id is ",id)
    var name = localStorage.getItem("name")
    console.log("Name is ",name)
    var user = localStorage.getItem("user")
    console.log("User is ",user) // not object...,
    console.log(user.name)
    console.log(typeof user)

    var userObj = JSON.parse(user)
    console.log("User is ",userObj)
    console.log(userObj.name)
    console.log(typeof userObj)

    // var user = JSON.parse(localStorage.getItem("user"))
    // console.log("User is ",user)


}