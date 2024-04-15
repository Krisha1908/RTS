//"https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=fe4feefa8543e06d4f3c66d92c61b69c"


const fetchWeather = async (city) => {


    const url =`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=fe4feefa8543e06d4f3c66d92c61b69c`

    const res = await fetch(url,{
        method:"GET",
    })

    const data = await res.json()
    console.log("Data..",data)

    const cityId = document.getElementById("city")
    cityId.innerHTML = data.name
    const temp = document.getElementById("temp")
    temp.innerHTML = data.main.temp - 273.15

}
fetchWeather("Ahmedabad")