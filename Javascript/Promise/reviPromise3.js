const playVideo = () => {
    console.log("play video is in progress..");
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve({
          status: "success",
          video: "abc.mp4",
          price: 100,
        });
      }, 2000);
    });
  };
  
  const payForVideo = (videoData) => {
    console.log("Payment in progress..")
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve({
          status: "success",
          video: videoData.video,
          payment: videoData.price,
        });
      }, 2000);
    });
  };
  
  const youTube = () => {
    playVideo().then((Videodata) => {
      console.log(Videodata);
      payForVideo(Videodata).then((data) => {
          console.log(data);
        })
      
    });
    
  };
  
  youTube();