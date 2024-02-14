function science(name) {
    console.log("I am science student", name);
  }
  
  function commerce(name) {
    console.log("I am commerce student", name);
  }
  function arts(name) {
    console.log("I am arts student", name);
  }
  
  function admission(cb,stuName) {
    cb(stuName); //science()
  }
  
  var per = 90;
  if (per >= 80) {
    admission(science,"amit");
  } else if (per >= 60) {
    admission(commerce,"raj");
  } else {
    admission(arts,"parth");
  }
  