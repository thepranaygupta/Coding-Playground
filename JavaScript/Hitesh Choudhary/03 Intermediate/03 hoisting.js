// FOLLOW THIS: https://youtu.be/9Ta1umc3tkQ?list=PLRAV69dS1uWSxUIk5o3vQY2-_VKsOpXLD
tipper("80");
function tipper(a) { // this is a declared function and is made avialable
    var bill = parseInt(a); // type conversion from string to integer
    console.log(bill + 5);
}


// bigTipper("200"); // running this line will throw an error
var bigTipper = function (a) { // this is a declared variable and it is undefined
    var bill = parseInt(a); // type conversion from string to integer
    console.log(bill + 15);
}
bigTipper("200"); // this line will execute properly due to the concept of hoisting

var name = "Pranay";
console.log(name);
