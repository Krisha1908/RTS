function tobecalled()
{
    console.log("tobecalled function");
}

function tobecalled1()
{
    console.log("tobecalled function 1");
}

function test(cb,a)
{
    cb();
    console.log(a);
}

test(tobecalled,10);
test(tobecalled1,1000);


// var p = 200;
// if(p ==20){
//     test(toBeCalled,100)
// }
// else{
//     test(toBeCalled1,200)
// }
