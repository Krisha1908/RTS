function start()
{
    
    var time = hour + ":" + mins + ":" + sec;
    document.getElementById("txt").innerHTML = time;
}

setInterval(start,1000);
