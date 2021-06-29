var name = "Pranay";

console.log("Line number 3", name);

function sayName() {
    var name = "Mr. P";
    console.log("Line number 7", name);
    sayNameTwo();

    function sayNameTwo() {
        var name = "Mr. PG";
        console.log("Line number 12", name);
    }
}

sayName();