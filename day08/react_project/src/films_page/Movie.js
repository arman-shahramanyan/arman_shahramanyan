import Film from "../film_page/Film";
import './FilmPage.css';
import { FilmsContext } from "../App";
import { useContext } from "react";


function Movies (props) {
    const {list, setList} = useContext(FilmsContext);

    const filtered = list.map(function (el) {
        let input = "";
        if (props.value !== undefined){
            input =props.value.toLowerCase();
        }
        if (el.name.toLowerCase().startsWith(input)) {
            return(
                <div className="container">
                    <h1 id = 'name'> {el.name}</h1>
                    <img src = {el.image}/>
                    <p>{el.description}</p>
                    <button id = "delete" onClick={() => {
                            setList(list.filter(e => e.name !== el.name))
                        }}>Delete</button>
                    <button id = 'goto' >GO TO</button>
                    </div>
                    )
        }
    });
    
    for (let i = 0; i < filtered.length; i++) {
        if (filtered[i] !== undefined) {
            return filtered;
        }
    }  
}

export default Movies;