const placeOrder = ()=>
{

    return  new Promise((accept,reject)=>
    {
        setTimeout(()=>{
            // accept({orderId:1234,amount:5000,status:"Order is placed"})
            reject({orderId:1234,statsu:"Order is not placed"})
        },3000)
    })
}

var x = placeOrder()
console.log(x)
x.then((orderData)=>{
    console.log("Order is placed successfully",orderData)
})
x.catch((error)=>{
    console.log("Order is not placed",error)
}) 

console.log("starts")
placeOrder().then((orderData)=>{
    console.log("Order is placed successfully",orderData)
}).catch((error)=>{
    console.log("Order is not placed",error)
})