const generateimag = ()=>{
    const path = "..\\img\\"
    const image = ["mountains.jpeg","rainbow.jpeg","paris.avif","tulip.jpeg"];

    const randomIndex = Math.floor(Math.random()* image.length);
   console.log(path+image[randomIndex])
    var images = document.getElementById('images');
    images.src = path+image[randomIndex] 

}