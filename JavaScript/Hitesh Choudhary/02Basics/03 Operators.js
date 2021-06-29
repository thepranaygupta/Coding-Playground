// Discount Percent = ((ListPrice - SellingPrice)/ListPrice)*100

var sellingPrice = 199;
var listPrice = 799;

var discount = 799-199;
var discountPercent = (discount/listPrice)*100;

console.log("Discount Percentage is = " + (discountPercent));

var displayDiscount = Math.round(discountPercent);
console.log(displayDiscount + "% off");

// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Operator_Precedence