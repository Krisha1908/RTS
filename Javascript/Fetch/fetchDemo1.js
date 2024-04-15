const getAPiDemo1 = async () => {

    //1 - url
    //2 - options
    const res = await fetch("https://reqres.in/api/users?page=2",{
            method:"GET",
    })

    const data = await res.json() //json() function returns a promise, and its resolved value is the JSON object deserialized from the response body.
    console.log(res)
    console.log("Data..",data)
    console.log("Data..",data.data) //array
    console.log(data.page)


}


const getAPiDemo2 = async () => {


    const res = await fetch("https://dummy.restapiexample.com/api/v1/employees",{
            method:"GET",
    })
    const data = await res.json()
    console.log(res)
    console.log("Data..",data)

}

//getAPiDemo1()
//getAPiDemo2()
const getAPiDemo3 = async () => {



    const res = await fetch ("https://jsonplaceholder.typicode.com/posts",{
            method:"GET",
    })
    console.log(res)
    const data = await res.json()
    console.log("Data..",data)



}

getAPiDemo3()