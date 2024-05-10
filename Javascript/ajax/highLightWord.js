function highlightWord() {
    var sentence = document.getElementById("sentence").textContent;
    var textmark = document.getElementById("textMark").value.toUpperCase(); 
    var highlightedSentence = "";

    for (var i = 0; i < sentence.length; i++) {
        if (sentence[i] === textmark[i])
        {
            highlightedSentence += '<span class="highlight">' + sentence[i] + '</span>';
        } 
        else
        {
            highlightedSentence =  highlightedSentence + sentence[i]; 
        }
    }

    var sentence = document.getElementById("sentence");
    sentence.innerHTML = highlightedSentence;
}
