const getDataFromFile =() => {

    const output = document.getElementById("output");
    const xhr = new XMLHttpRequest();
    xhr.open("GET","../th.txt",true) 

    xhr.send();
    xhr.onload = () => {
       // console.log(xhr.responseText);
        output.innerHTML = xhr.responseText;
        console.log(JSON.parse(xhr.responseText))
    }


}