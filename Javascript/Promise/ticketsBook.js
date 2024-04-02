var tickets = 100;

const bookShow = (event) => {

  event.preventDefault();

  var name = document.getElementById("name").value;
  var count = document.getElementById("count").value;

  var result = document.getElementById("result");

  const data = {
    ticketCount: count,
    userName: name,
  };

  generateTicket(data)
    .then((ticket) => {
      console.log(ticket);
      //result.innerHTML = JSON.stringify(ticket);
      //result.innerHTML = ticket
      result.innerHTML = `Congratulations ${ticket.userName}! Your ticket number is ${ticket.ticketNo}`;
    })
    .catch((err) => {
      console.log(err);
    });
};

//data -->ticketCount
//data -->userNam
const generateTicket = (data) => {
  console.log("Generating ticket for user " + data.userName);
  const random = Math.floor(Math.random() * 10000);
  //console.log(random);
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (data.ticketCount > tickets) {
        reject("Sorry! No tickets available");
      } else {
        resolve({
          status: "success",
          ticketCount: data.ticketCount,
          ticketNo: random,
          userName: data.userName,
        });
      }
    }, 2000);
  });
};

