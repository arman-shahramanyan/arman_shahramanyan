// 1 task

const str = "Javascript is a programming language";

console.log(str);

function firstWordUppercase(str) {
    const tmp = str.slice(0, str.indexOf(' '));
    str = str.replace(tmp, tmp.toUpperCase());
    console.log(str);
}
firstWordUppercase(str);

console.log("==================================================");

// 2 task

function cutArray(array, cutSize) {
    const tmp = [];

    for (let i = 0; i < array.length; i += cutSize) {
        tmp.push(array.slice(i, i + cutSize));
    }
    return  tmp;
}

console.log(cutArray([1, 2, 3, 4], 2));
console.log(cutArray([1, 2, 3, 4, 5], 4));
console.log(cutArray([1, 2, 3, 4, 5, 6, 7, 8], 3));

console.log("==================================================")

// task 3

function sumOfObjectValues(object) {
    let sum = 0;

    for (const key in object) {
        if (!isNaN(object[key])) {
            sum += object[key];
        }
    }
    return sum;
}

console.log(sumOfObjectValues({ a: 10, b: 20, c: 'string', d: 12 }));

console.log("==================================================")

// task 4

function numberOfVowel(string) {
    arr = ['a', 'e', 'u', 'i', 'o'];
    let count = 0;
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < string.length; j++) {
            if (string[j] == arr[i]) {
                count++;
            }
        }
    }
    return count;
}

console.log(numberOfVowel('Today is the best day of my life'));

console.log("=================================================")

// task 5

function sum(arr) {
    let positive = 0;
    let negative = 0;

    for (let i = 0; i < arr.length; i++) {
        (arr[i] >= 0) ? positive += arr[i] : negative += arr[i];
    }

    const obj = {
        'Positive': positive,
        'Negative': negative
    }

    return obj;
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