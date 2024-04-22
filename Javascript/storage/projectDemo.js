var product = [
    {
        id : 1,
        name : "Laptop",
        price : 123000,
        description: "New Mac M2 pro",

    },
    {
        id : 2,
        name : "moblie",
        price : 43000,
        description: "New 5G moblie" ,
    }
]

const loadProducts = () =>{


    const productContainer = document.getElementById("product-container")

    for(let i=0;i<product.length;i++)
    {
        const proDiv = document.createElement("div");
        proDiv.className = "product";
        const prodcutInfoDiv = document.createElement("div");
        prodcutInfoDiv.className="product-info";

        const title = document.createElement("h2");
        title.innerHTML = product[i].name;
        title.className = "product-title";

        const price = document.createElement("p");
        price.innerHTML = "Price: "+product[i].price;
        price.className = "product-price";

        const description = document.createElement("p");
        description.innerHTML = "Description: "+product[i].description;
        description.className = "product-description";

        const button = document.createElement("button");
        button.innerHTML = "Add to Cart"
        button.className = "btn";

        button.addEventListener("click",()=>{

            localStorage.setItem("cart",JSON.stringify(product[i]))
            alert("product added to cart ->"+product[i].name)
        })

        prodcutInfoDiv.appendChild(title);
        prodcutInfoDiv.appendChild(price);
        prodcutInfoDiv.appendChild(description)
        prodcutInfoDiv.appendChild(button)


        proDiv.appendChild(prodcutInfoDiv)
        productContainer.appendChild(proDiv)
    }
}