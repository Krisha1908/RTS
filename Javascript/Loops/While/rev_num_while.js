var no = 345;
var count = 0;
var rem = 0;
var rev = 0;

while (no > 0) {
  rem = no % 10;
  rev = rev *10+rem;
  no = Math.floor(no / 10);

}
console.log(rev);