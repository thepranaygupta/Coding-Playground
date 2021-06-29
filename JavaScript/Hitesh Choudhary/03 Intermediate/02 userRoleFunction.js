// var getUserRole = function (name, role) {   // pro way
function getUserRole(name, role) {  // naive way
    switch (role) {
        case "admin":
            return `${name} is an admin with all access`;
        case "subadmin":
            return `${name} is sub-admin with access to create and delete courses`;
        case "testpre":
            return `${name} is testprep with access to create and delete tests`;
        case "user":
            return `${name} is a user to consume content`;
        default:
            return `${name} is a trial user`;
    }
}

console.log(getUserRole("Pranay", "subadmin"));
