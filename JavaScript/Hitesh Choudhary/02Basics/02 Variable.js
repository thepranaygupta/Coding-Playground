const uID = "abc123"; // here uID is a constant variable
// uID = "xyz789";    // this is illegal because we cannot assign anything to a constant variable

var fullName = "Pranay Gupta";
var email = "pranayguptamain@gmail.com";
var password = "123456";
var confirmPassword = "123456";
var courseCount = 0;
var isLoggedInFromGoogle = false;

// fullName = prompt("Enter your Full Name:"); // this is used when the js file is attached to a webpage

console.log("Unique ID is: " + uID); // we can use + to print a value along with another value
console.log("Name:", fullName); // we can also use , for the same task
console.log("Email:", email);
console.log("Password:", password);

// PRO MOVE
console.log(`
    Unique ID:  ${uID}
    Name:       ${fullName}
    Email:      ${email}
    Passwod:    ${password}
`);
