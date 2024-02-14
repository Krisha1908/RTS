function calling(){

    console.log("calling")
    return 100;
}
function sms(){
    
        console.log("sms")
        return "hi message from siri";
}

function call(cb){

        var x = cb()//calling() //sms
        
        console.log(x)

}
//call(calling)
call(sms)