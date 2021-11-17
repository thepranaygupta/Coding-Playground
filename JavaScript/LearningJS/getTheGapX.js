const str = 'XeroX';
//           01234
function getTheGapX(str) {
    // write your solution here

    return lastIndexOf('X') - indexOf('X');
}

console.log(`Gap between the X's: ${getTheGapX(str)}`)
