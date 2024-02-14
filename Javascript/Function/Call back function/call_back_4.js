function science(name) {
    console.log("I am science student", name);
  }
  
  function commerce(name) {
    console.log("I am commerce student", name);
  }
  function arts(name) {
    console.log("I am arts student", name);
  }
  
  function admission(cb) {
    cb("amit"); //science()
  }
  
  var per = 90;
  if (per >= 80) {
    admission(science);
  } else if (per >= 60) {
    admission(commerce);
  } else {
    admission(arts);
  }
  