alert
(
   `\t->Product lis <- \n
    1.Snikers - 200AMD \n
    2.CocaCola - 400AMD \n
    3.Jermuk - 99.9AMD \n
    4.Chocolate - 1200AMD \n
    5.Sweets - 350AMD`
);

productCount = (product) => `How many ${product} do you want?`;

let snikersCount = prompt(productCount('Snikers'), 0);
let cocaColaCount = prompt(productCount('CocaCola'), 0);
let jermukCount = prompt(productCount('Jermuk'), 0);
let chocolateCount = prompt(productCount('Chocolate'), 0);
let sweetsCount = prompt(productCount('Sweets'), 0);

const snikersPrice = 200;
const cocaColaPrice = 400;
const jermukPrice = 99.9;
const chocolatePrice = 1200;
const sweetsPrice = 350;

function price (prodCount, productPrice) {
    return prodCount * productPrice;
} 
    

let check = () => {
    return price(snikersCount, snikersPrice) +
    price(cocaColaCount, cocaColaPrice) +
    price(jermukCount, jermukPrice) +
    price(chocolateCount, chocolatePrice) +
    price(sweetsCount, sweetsPrice)
}

let cash = Number(prompt('Pay for the purchase', 0));
let count = 0;

if(cash < check()) {
    alert('The amount paid does not match the check.');
} else if(cash >= check()) {
    console.log(`Total:  ${cash} AMD,`);
    console.log(`Change: ${cash - check()} AMD,`);
    console.log(`Cost: ${check()} AMD,`);
    console.log('Purchased products: \n');
    (snikersCount > 0) ? console.log(`Snikers - ${snikersCount} pieces - ${price(snikersCount, snikersPrice)}AMD,`) : count++;
    (cocaColaCount > 0) ? console.log(`CocaCola - ${cocaColaCount} pieces - ${price(cocaColaCount, cocaColaPrice)}AMD,`) : count++;
    (jermukCount > 0) ? console.log(`Jermuk - ${jermukCount} pieces - ${price(jermukCount, jermukPrice)}AMD,`) : count++;
    (chocolateCount > 0) ? console.log(`Chocolate - ${chocolateCount} pieces - ${price(chocolateCount, chocolatePrice)}AMD,`) : count++;
    (sweetsCount > 0) ? console.log(`Sweets - ${sweetsCount} pieces - ${price(sweetsCount, sweetsPrice)}AMD,`) : count++;
    
    if(count == 5) {
        alert('You didn\'t buy anything');
    } else {
        console.log('Thank you for your purchase!!!');
    }
} else {
    alert('Wrong input amount');
}