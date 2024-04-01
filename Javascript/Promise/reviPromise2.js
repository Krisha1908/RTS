//pending, resolve,reject

const genereteQuestions = () => {

    console.log('Questions are being generated')
    return new Promise((resolve,reject)=>{

        setTimeout(()=>{
           resolve(['Q1','Q2','Q3','Q4','Q5'])
        },3000)

    })


}

const genereteAnswers = () => {


        genereteQuestions().then((data)=>{

            for(let i=0;i<data.length;i++){

                console.log('Answer for '+data[i])
            }
            
        })


}
genereteAnswers()