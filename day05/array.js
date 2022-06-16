// 1 task

const str = "Javascript is a programming language";

console.log(str);

function firstWordUppercase(str) {
    const tmp = str.slice(0, str.indexOf(' '));
    return str.replace(tmp, tmp.toUpperCase());
}
console.log(firstWordUppercase(str), '====variable to function');
console.log(firstWordUppercase("javascript is a programming language"), '====string to function');

console.log("==================================================");

// 2 task

function cutArray(array, cutSize) {
    const tmp = [];

    if (cutSize > 0) {
        for (let i = 0; i < array.length; i += cutSize) {
            tmp.push(array.slice(i, i + cutSize));
        }   
        return  tmp;
    }
    return array;
}

console.log(cutArray([1, 2, 3, 4], 0));
console.log(cutArray([1, 2, 3, 4, 5], 4));
console.log(cutArray([1, 2, 3, 4, 5, 6, 7, 8], 3));

console.log("==================================================")

// task 3

function sumOfObjectValues(obj) {
    let sum = 0;
    let arr = Object.values(obj);
    for (let i = 0; i < arr.length; i++) {
        if (typeof arr[i] == "number") sum += arr[i];
    }
    return sum;
}

console.log(sumOfObjectValues({ a: 10, b: 20, c: '17', d: 12 }));

console.log("==================================================")

// task 4

function numberOfVowel(string) {

    let text = string.toLowerCase();

    let consonants =  text.replace(/[aeuio]/gi, '');

    return text.length - consonants.length;
}

console.log(numberOfVowel('Today IS the best day Of my lifE'));

console.log("=================================================")

// task 5

function sum(arr) {
    let positive = 0;
    let negative = 0;

    for (let i = 0; i < arr.length; i++) {
        (arr[i] >= 0) ? positive += arr[i] : negative += arr[i];
    }
    return {
        positive,
        negative
    };
}

console.log(sum([10, -12, 30, -1, -8, 0, 14, -33, 20]));

console.log("==================================================")

// task 6

const data = [
    {
      id: 1,
      name: 'Name one',
      city: 'Stepanakert',
    },
    {
      id: 2,
      name: 'Name one',
      city: 'Erevan',
    },
    {
      id: 3,
      name: 'Name one',
      city: 'Moscow',
    },
    {
      id: 4,
      name: 'Name one',
      city: 'Stepanakert',
    },
    {
      id: 5,
      name: 'Name one',
      city: 'Erevan',
    },
  ];

const uniqueCity = [...new Set(data.map(item => item.city))];
console.log(uniqueCity);

console.log("==================================================");

// task 7

function stringSort(str) {
    return str.replace(/[^a-zа-яё]/gi, '').toLowerCase().split('').sort().join('');
}

function anagramCheck(str1, str2) {
    
    return (stringSort(str1) == stringSort(str2)) ? true : false;
}

console.log(anagramCheck('rail safety', 'fairy tales'));
console.log(anagramCheck('RAIL! SAFETY!', 'fairy tales'));
console.log(anagramCheck('Hi there', 'Bye there'));