function highlightWord() {
    var sentence = document.getElementById("sentence").textContent;
    var textmark = document.getElementById("textMark").value; 
    var highlightedSentence = "";

    for (var i = 0; i < sentence.length; i++) {
        if (sentence[i] == textmark[i]) 
        {
            highlightedSentence += '<span class="highlight">' + sentence[i] + '</span>';
        } 
        else 
        {
            highlightedSentence += sentence[i]; 
        }
    }

    var sentenceElem = document.getElementById("sentence");
    sentenceElem.innerHTML = highlightedSentence;  
    
    
    if(count==0)
    {
        startTime = performance.now();
        console.log(startTime);
        var startTime = document.getElementById("startTime");
        st.innerHTML = "StartTime = " + startTime;

    }
    count++;
}

var count = 0;
var startTime;

function end()
{
    var time = document.getElementById("time");
    var endTime = performance.now();
    console.log(end);
    // var endTime = document.getElementById("endTime");
    // et.innerHTML = "EndTime = " + end;

    diff = (endTime - startTime)/1000;
    console.log("Diff ",diff);

}
