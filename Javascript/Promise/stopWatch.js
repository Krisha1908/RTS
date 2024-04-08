function start()
{
   var start = document.getElementById("start");
   var reset = document.getElementById("reset");
   
   reset.addEventListener("click" , () =>{
    
   })
    var time = hour + ":" + mins + ":" + sec;
    document.getElementById("txt").innerHTML = time;
    
}

setInterval(start,1000);
