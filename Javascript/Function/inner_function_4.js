const convert = (sname)=>{


    const checkName = (name)=>{ //raj

        if(name.length>=3){
            return true;
        }
        else{
            return false;
        }
        
    }

 var flag = checkName(sname);  //true/false
 console.log(flag); //true
 if(flag == true){

    return sname.toUpperCase(); //RAJ
 }
 else{
    return "Invalid Name"; 
 }

}

var result = convert("krisha");
console.log(result); //RAJ