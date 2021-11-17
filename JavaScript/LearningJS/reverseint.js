const num = 3849;

function reverseGivenInteger(num) {
    // write your solution here
    let reverse = 0;
    while (num > 0) {
        let digit = num % 10;
        reverse = reverse * 10 + digit;
        num = parseInt(num / 10);
    }
    return reverse;
}

console.log(`Reversed integer is: ${reverseGivenInteger(num)}`)
