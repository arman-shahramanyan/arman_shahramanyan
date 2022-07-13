import express from "express";

let app = express();

app.get('/', function (req, res) {
    res.send('<b>My</b> first express http server');
});

app.get('/welcome', function (req, res) {
    res.send('<b>Hello</b> welcome to my http server made with express');
});

app.route('/article')
.get(function(req, res) {
    res.send('Get the article');
})
.post(function(req, res) {
    res.send('Add an article');
})
.put(function(req, res) {
    res.send('Update the article');
});

app.get('/the*man', function(req, res) {
    res.send('the*man');
});

app.get(/bat/, function(req, res) {
    res.send('/bat/');
});

// app.get('/books/:user/category/:categorySlug', function(req, res) {
//     console.log(req.params);
//     var username = req.params.user;
//     var category = req.paramas.categorySlug;
//     res.send(req.params);
// });

app.use(function(req, res, next) {
    res.status(404).send("Sorry, that route doesn't exist. Have a nice day :)");
});

app.listen(3000, function () {
    console.log('Example app listening on port 3000.');
});