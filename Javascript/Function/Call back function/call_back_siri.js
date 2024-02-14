const siri = (name)=>
{
    console.log("siri..")
    return name + " msg from SIRI..";
}

const google=(name)=>
{
    console.log("google..");
    return name + " msg from GOOGLE..";
}

const alexa = (name)=>
{
    console.log("alexa..");
    return name + " msg from ALEXA..";
}

function call(cb)
{
    var a = cb("raj");
    console.log(a);
}


var choice = "siri";

switch (choice) {
  case "siri":
    call(siri);
    break;
  case "alexa":
    call(alexa);
    break;
    case "google":
    call(google);
    break;
    default:
    console.log("invalid choice")

}
