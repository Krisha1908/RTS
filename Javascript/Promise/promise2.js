const placeOrder = (()=>{

    const promise = new Promise((accept,reject)=>{

        setTimeout(()=>{
            // accept({orderId : 1001, amount : 2490, Status : "Order Place Successfully..."});
            reject({orderId : 1001, Status : "Order is not placed"});
        },3000)
    })


    console.log(promise);

    promise.then((orderData)=>{
        console.log("Order is placed successfully",orderData)
    })
    promise.catch((error)=>{
        console.log("Order is not placed",error)
    })
})

placeOrder();