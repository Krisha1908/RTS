const exam = ()=>{

    console.log('Exam is started...')

    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve({
                examId:101,
                examName:'Java',
                marks: 80
            })
        },3000)
    })
}

const result = (examDetails)=>{


    return new Promise((resolve,reject)=>{

        setTimeout(()=>{
            resolve({
                examId: examDetails.examId,
                examName: examDetails.examName,
                marks: examDetails.marks,
                result: 'Pass'
            })
        },2000)


    })

}

console.log('Exam is being conducted')
exam().then((examData)=>{

    console.log("exam finiished..",examData)
    result(examData).then((resultData)=>{
        console.log('Result:',resultData)
    })

})