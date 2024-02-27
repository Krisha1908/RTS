document.getElementById("btn").addEventListener("click",()=>{

    console.log("button clicked..")
})

document.getElementById("btn").addEventListener("click",()=>{
    document.getElementById("btn").style.backgroundColor = "blue";
})

document.getElementById("btn").addEventListener("mouseover" ,()=>{
    document.getElementById("btn").style.height = "100px";
    document.getElementById("btn").style.width = "100px";
})


document.getElementById("btn").addEventListener("dblclick",()=>{

    document.getElementById("btn").innerHTML = "Double Clicked";
})