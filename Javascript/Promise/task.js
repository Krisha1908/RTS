const Car1 = () => {
    console.log("Car 1 is coming...");

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve();
        }, 5000); 
    });
};

const Car2 = () => {
    console.log("Car 2 is coming...");

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve();
        }, 7000); 
    });
};

const petrol = () => {
    console.log("Filling petrol...");

    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("Petrol filled");
            resolve();
        }, 3000); 
    });
};

const move = () => {

    Car1()
    .then(() => {
        return petrol();
    })
    .then(() => {
        console.log("Car 1 leaving");
        return Car2();
    })
    .then(() => {
        return petrol();
    })
    .then(() => {
        console.log("Car 2 leaving");
    })
};

move();