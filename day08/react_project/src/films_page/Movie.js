import React, {useState} from "react";
import image1 from './images/betmen.jpeg';
import image2 from './images/doktor-strendzh-v-multivselennoy-bezumiya.jpeg';
import image3 from './images/fantasticheskie-tvari-tayny-dambldora.jpeg';
import image4 from './images/mir-yurskogo-perioda-gospodstvo.jpeg';
import image5 from './images/morbius.jpeg';
import image6 from './images/sonik-2-v-kino.jpeg';
import Film from "../film_page/Film";

import './Movie.css';

let listOfMovies = [{name: "Betmen", image:image1, description: "Action, Triller, Crime"},
                        {name: "Doctor Strange", image:image2, description: "Horror, Fantasy, Action, Adventure"},
                        {name: "Fantastic Beasts",image:image3, description: "Adventure, Fantasy, Family"},
                        {name: "Jurassic World", image:image4, description: "Fantasy, Action, Adventure, Thriller"},
                        {name: "Morbius", image:image5, description: "Horron, Fantasy, Action, Thriller"},
                        {name: "Sonic 2", image:image6, description: "Cartoon, Fantasy, Action, Adventure, Family"}]

                        // function click(){
                            //     console.log("Click")
                            // }
                            // const button = document.getElementById("delete");
                            // button.addEventListener("click",click());
                            
function Movies (props) {
    let [list, setList] = useState(listOfMovies);
    const remove = (e) => {
        listOfMovies = listOfMovies.filter((el) => el.name != e);
        console.log(listOfMovies.length)
    //    filtered = filtered.filter((i) => i.name !== e);
    }

    const filtered = list.map(function (el) {
        let input = "";
        if (props.value != undefined){
            input =props.value.toLowerCase();
        }
        if (el.name.toLowerCase().startsWith(input)) {
            return(
                <div className="container">
                    <h1 id = 'name'> {el.name}</h1>
                    <img src= {el.image}/>
                    <p>{el.description}</p>
                    <button id = "delete" >Delete</button>
                    <button id = 'goto' >GO TO</button>
                    </div>
                    )
        }
    });
    
    for (let i = 0; i < filtered.length; i++) {
        if (filtered[i] != undefined) {
            return filtered;
        }
    }  
}

export default Movies;
export {listOfMovies}