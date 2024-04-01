const placeOrder = () => {


    return new Promise((reslove,reject)=>{

        setTimeout(()=>{

            reslove({
                orderID: 1234,
                orderStatus: 'Order Placed',
                amount: 500
            })
        },3000)

    })

}

const payment  = (orderDetails) => {


    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                orderID: orderDetails.orderID,
                amount: orderDetails.amount,
                paymentStatus: 'Payment Done'
            })
        },4000)
    })


}

//callback hell
//async await
console.log('Order is being placed')
placeOrder().then((orderDetails)=>{
    console.log('Order Placed:',orderDetails)
    payment(orderDetails).then((paymentDeatils)=>{
            console.log('Payment Done:',paymentDeatils)
    })

})


