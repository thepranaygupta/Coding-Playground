// A truthy value is a value that is considered true when encountered in a Boolean context. All values are truthy unless they are defined as falsy
// SOME FALSY VALUES ARE:
//  - undefined 
//  - null
//  - 0
//  - ''    (empty string)
//  - NaN   (Not a Number)

var one;    // here the variable one is undefined
// console.log(one);

var two = ''   // here the variable two is null
// console.log(two);

if(two) {
    console.log("TRUE");
}

console.log(2 + 2); // this will print 4 because both the operands are integers

console.log(2 + "2"); // this will print 22 because of the concept of coercion due to which JS assumes both the operands to be strings

var user = "2";
if (2 == user) {    // similarly this if condition is true
    console.log("TRUE");
}

if (2 === user) {   // this if will be false becuase === hard compares the values
    console.log("Actually TRUE");
}