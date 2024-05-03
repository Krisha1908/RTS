var user = {id:1, name:"krisha", age :18};

var newData = Object.assign(user , {status : 'active', age : 19});
console.log(newData);

var key = Object.keys(user);
console.log(key);

var values = Object.values(user);
console.log(values);

Object.freeze(user);
user.age = 22;
console.log(user);


// Object.seal(user);
// Object.assign(user, {age: 36});
// console.log(user)



// Object.defineProperty(user, 'email', {
//     value: 'krisha@gmail.com'
// })
// console.log(user);

// Object.defineProperties(user, {
//     email: {
//         value: 'mm'
//     },
//     phone: {
//         value: '456789'
//     }
// })
// console.log(user);