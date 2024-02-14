//0 1 1 2 3 5

var n1 = 0;
var n2 = 1;
var sum = 0;

for(let i=0;i<=10;i++){

    console.log(n1);
    sum = n1 + n2;
    n1 = n2;
    n2 = sum;
    
}
