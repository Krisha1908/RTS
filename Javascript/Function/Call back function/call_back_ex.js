function comm()
{
    console.log("Function comm......")
}

function sci()
{
    console.log("Functiom scii....")
}

function art()
{
    console.log("Function art...")
}

function addmission(cb)
{
    cb();
}

addmission(art);

var per=50
if (per >= 80) {
    admission(sci);
  } else if (per >= 60) {
    admission(comm);
  } else {
    admission(art);
  }