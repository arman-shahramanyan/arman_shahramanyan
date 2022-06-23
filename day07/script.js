let num = Math.floor(Math.random() * 100);
let input = document.querySelector("input");
let result = document.querySelector('#top > p')
let count = document.querySelector('#count');
let helper = document.querySelector('#bottom > p');
let score = document.querySelector('#score');
let button = document.querySelector('button');

let count1 = Number(count.textContent) - 1;

document.addEventListener("keydown", function(event) {

    if (event.key == "Enter") {
        if (input.value == num) {
            result.textContent = "You Win";
            score.textContent = count.textContent;
            window.sessionStorage.setItem("score", score.textContent);
        } else if (input.value < num) {
            if (num - input.value > 20) {
                helper.textContent = "Super High";
            } else {
                helper.textContent = "High";
            }
        } else {
            if (input.value - num > 20) {
                helper.textContent = "Super Low";
            } else {
                helper.textContent = "Low";
            }
        } 
        if (count1 < 0) {
            result.textContent = "You Loss";
        } else if (result.textContent != "You Win") {
            count.textContent = String(count1--);
        }
        input.value = "";
    }
});

button.addEventListener("click", function() {
    window.location.reload();
} ) 
score.textContent = window.sessionStorage.getItem("score");
