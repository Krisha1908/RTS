const getData = () => {


    const promise = new Promise((resolve,reject)=>{




        setTimeout(()=>{
            resolve("Data Fetched Successfully....");
            // reject("Error While fetching Data....  ");
        },3000)
    })





    console.log(promise)

    promise.then((data)=>{
        console.log("data..",data)
    })

    promise.catch((error)=>{
        console.log("error..",error)
    })


}

getData();

