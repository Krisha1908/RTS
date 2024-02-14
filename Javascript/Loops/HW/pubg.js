// var mapchoice = "erangle";

// user will select a no of players : 1 --> solo ,2 --> duo --> 4 --> squad
// please select map : --> erangle, miramar,sanhok
// drop location :-> pochinki, school, military base, georgopol



var mapchoice = "erangle";
var noOfPlayers = "duo";
var dropLocation = "Georgopol";

if ((noOfPlayers == "solo") | (noOfPlayers=="duo") | (noOfPlayers=="squad")) {
  if (mapchoice == "erangle") {
    if (
      (dropLocation == "Georgopol") |
      (dropLocation == "School") |
      (dropLocation == "Sosnova Military Base")
    ) {
      console.log("You have chossen: ", noOfPlayers, mapchoice, dropLocation);
    }
  }
}

else if ((noOfPlayers == "solo") | (noOfPlayers=="duo") | (noOfPlayers=="squad")) {
  if (mapchoice == "miramar") {
    if (
      (dropLocation == "El Pozo") |
      (dropLocation == "Los Leones") |
      (dropLocation == "San Martin")
    ) {
      console.log("You have chossen: ", noOfPlayers, mapchoice, dropLocation);
    }
  }
}

else if ((noOfPlayers == "solo") | (noOfPlayers=="duo") | (noOfPlayers=="squad")) {
  if (mapchoice == "sanhok") {
    if (
      (dropLocation == "Camp Alpha") |
      (dropLocation == "Bootcamp") |
      (dropLocation == "Paradise Resort")
    ) {
      console.log("You have chossen: ", noOfPlayers, mapchoice, dropLocation);
    }
  }
} else {
  console.log("CHOOSE PROPER OPTIONS");
}