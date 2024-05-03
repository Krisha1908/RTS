class test {

    a = 10;
    x;
    //private variable
    #y=30;

    getData = () =>
    {
        console.log("Data a = ",this.a);  
        console.log("Data x = ",this.x); 
        console.log("Data #y = ",this.#y);   


       
    }

    constructor()
    {
        console.log("I am constructor");
        this.x=20;  
    }


     //normal function
    //  printData(){
    //     console.log("Data is ", this.a);
    //     console.log("Data is ", this.x);
    //     console.log("Data is ", this.#y);    
    // }



     //private methods

     #myData = () => {
        console.log("Private method");
     }

     callPrivate(){
        this.#myData();
     }
     
}

let t = new test;
t.getData();
console.log("Value of a ", t.a);
t.callPrivate();