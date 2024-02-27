document.getElementsByName("box")[0].addEventListener("mouseover",()=>
{
    document.getElementsByName("box")[0].style.backgroundColor = "pink";
    document.getElementsByName("box")[0].style.border = "4px solid black";
    
})

document.getElementsByName("box")[0].addEventListener("click",()=>
{
    document.getElementsByName("box")[0].style.backgroundColor = "green";
    document.getElementsByName("box")[0].style.borderRadius = "50px";
})


document.getElementsByName("box")[0].addEventListener("dblclick",()=>
{
    document.getElementsByName("box")[0].style.backgroundColor = "yellow";
    document.getElementsByName("box")[0].style.height = "1000px";
})


