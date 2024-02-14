var teamPoints = 10;
var teamNRR = 0.5;
var teamWins = 5;
var teamDraw = 0;

if (teamPoints >= 10) {
  if (teamNRR >= 0.5) {
    if (teamWins >= 5) {
      if (teamDraw === 0){
        console.log("Qualified for Trophy");
      } else {
        console.log("NOT Qualified");
      }
    } else {
      console.log("NOT Qualified");
    }
  } else {
    console.log("NOT Qualified");
  }
} else {
  console.log("NOT Qualified");
}