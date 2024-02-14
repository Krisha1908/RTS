function goa(name,amount){

    console.log("goa");
    return name + " hi message from GOA and amount is "+amount;
}
function amstrdam(name,amount){

    console.log("amstrdam");
    return name + " hi message from AMSTRDAM and amount is "+amount;
}
function lasVegas(name,amount){

    console.log("lasVegas");
    return name + " hi message from LASVEGAS and amount is "+amount;
}

function  prague(name,amount){

    console.log("prauge");
    return name + " hi message from PRAGUE and amount is "+amount;
}

function vacation(cb,name,amount){

    var x = cb(name,amount)
    console.log(x)
}

var amount = 11000;

if(amount > 10000){
    vacation(amstrdam,"amit",amount)
}
else if(amount > 5000){
    vacation(lasVegas,"raj",amount)
}
else if(amount > 2000){
    vacation(prague,"vash",amount)
}
else{
    vacation(goa,"vraj",amount)
}