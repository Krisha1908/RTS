function demo()
{
    console.log("this is a demo function");
}

function test(a)
{
    console.log("value..."+a);
    a();
}

test(demo);