const text = document.getElementById('text').innerHTML;
console.log(text);
var textArray = text.split('');
console.log(textArray);

var count =0
var startTime;

const showText = () => {
    
    if(count ==0){
        startTime = performance.now(); 
        console.log(startTime);
    }
    count++;

    var input = document.getElementById('input').value;
    
    var inputArray = input.split('');
    console.log(inputArray);
    for(var i=0;i<inputArray.length;i++){

        if(inputArray[i] == textArray[i]){
            //span
            document.getElementById('text').innerHTML = '<span style="color:red;">'+textArray.slice(0,i+1).join('')+'</span>'+textArray.slice(i+1).join('');
            console.log(textArray.slice(0,i+1).join(''))
        }

    }

    
}
const end = () => {

    var time  =document.getElementById('time');
    var endTime = performance.now(); 
    console.log(endTime);

    var diff = (endTime - startTime)/1000;
    console.log(diff + " seconds");
    time.innerHTML = "DIFFERENCE = " + diff + " seconds";
    //seconds 


}
