function outer()
{
    console.log("I am outer function");
    function inner()
    {
        console.log("I am inner function");
    }
    inner();
}

outer();


function bank()
{
    function withdraw()
    {
        console.log("Withdraw")

    }

    function deposit()
    {
        console.log("deposit")
    }
    deposit();
    withdraw();
}
bank();