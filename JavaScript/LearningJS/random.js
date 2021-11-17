function randomNumberGeneratorInRange(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min + 1) + min);
}

console.log(`My random number: ${randomNumberGeneratorInRange(10, 50)}`)

console.log(Math.random());
