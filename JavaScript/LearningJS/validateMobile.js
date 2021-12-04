const number = '+919876543210';

function validateMobile(number) {
    // write your solution here
    let s = number + "";
    if (s.length == 10)
        return true;
    else if (s.substring(0, 3) === "+91")
        if (((s.substring(3,)).trim()).length == 10)
            return true;
    else if (s.charAt(0) === "0")
            return true;
        else
            return false;
}

console.log(`is a valid Indian mobile number: ${validateMobile(number)}`)
