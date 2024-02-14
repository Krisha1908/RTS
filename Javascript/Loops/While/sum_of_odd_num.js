var num=15621;
var sum= 0;
var digit;
while (num > 0) {
    digit = num % 10;

    if (digit % 2 !== 0)
    {
        sum = sum+digit;
    }

    num = Math.floor(num/ 10);
}

console.log("Sum of odd digits: " ,sum);
