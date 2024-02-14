// function Calculator(){

//         function add(a,b){

//             console.log(a+b);
//         }

//         add(100,20);

// }
// Calculator();

function Calculator(x, y) {
    console.log("value of x = ", x);
    console.log("value of y = ", y);
  
    function add(a, b) {
      
      console.log(a + b);
    }
  
    //add(100,100);
    add(x, y);
  }
  Calculator(10, 20);