function whatsapp()
{
    console.log("HI.....Msg from whatsapp...")
}

function call()
{
    console.log("Someone is Calling you..")
}
function sms()
{
    console.log("SMS...")
}

function moblie(cb)
{
    cb();
}
moblie(whatsapp)
moblie(call)
moblie(sms)

