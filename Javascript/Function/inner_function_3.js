function clc(m,n)
{
    function add(a,b)
    {
        return a+b;
    }

    function sub (a,b)
    {
        return a-b;
    }


    var ans1 = add(m,n);
    var ans2 = sub (m,n);
   
    console.log("add...",ans1);
    console.log("sub...",ans2);
   
    // return ans1;
}

var cal = clc(10,30);
console.log("ans "+cal)








function Calc1(x,y){

    function mul(a,b){
            
            return a*b;
    }

    // var ans = mul(x,y)
    // return ans;

    return mul(x,y);




}
var y = Calc1(10,20);
console.log("y = ",y);