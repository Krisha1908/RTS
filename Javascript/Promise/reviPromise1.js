const  genereteQuestions = () => {



    console.log('Questions are being generated');
    return new promise ((resolve,reject)=>{

        setTimeout(()=>{
            resolve(['Q1','Q2','Q3','Q4','Q5'])
        },2000);
    })

    
}

const Exam = () => {

    console.log('Exam started')

    genereteQuestions().then((data)=>{
        console.log(data)
        console.log('Exam ended')
    }).catch((err)=>{
        console.log(err)
    })
    
}

Exam();