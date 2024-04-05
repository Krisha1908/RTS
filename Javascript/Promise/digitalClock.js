function time()
{
    var date = new Date();
    var hour = date.getHours();
    var mins = date.getMinutes();
    var sec = date.getSeconds(); 

   
    var time = hour + ":" + mins + ":" + sec;
    document.getElementById("txt").innerHTML = time;
     
}

// time();

setInterval(time,1000);