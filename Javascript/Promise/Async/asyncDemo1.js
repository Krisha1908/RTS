const getData = () =>{

    return new Promise((resolve,reject)=>{


        setTimeout(()=>{
            resolve("Data Received")
        },3000)
    })
}

async function fetchData()
{
    console.log("FetchData Called");
    const data = await getData();
    console.log("data-->",data);
    console.log("fetchData end");
}

fetchData();