import { useState } from "react";
import Movies from "./Movie";
import { listOfMovies } from "./Movie";

function Search(props) {
    const[input, setInput] = useState("");
    console.log(input)
    console.log(props.count);

    
    return (
        <div className="search">
            <div id  = "buttonBlock">
                <div id = "count">Count: {listOfMovies.length}</div> 
                <input type="search" value={input} placeholder='Search...' onChange={(evt)=>setInput(evt.target.value)}/>
                <button id = "add">Add</button>
            </div>
            <div className="main">
                {<Movies value={input}/>}
            </div>
        </div>)
}

export default Search;