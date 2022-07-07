import react from "react";
import { useState } from "react";
import Movies from "./Movie";
import {FilmsContext} from '../App';
function Search() {
    const[input, setInput] = useState("");
    const {list, setList} = react.useContext(FilmsContext);

    return (
        <div className="search">
            <div id  = "buttonBlock">
                <div id = "count">Count: {list.length}</div> 
                <input type="search" value={input} placeholder='Search...' onChange={(evt)=>setInput(evt.target.value)}/>
                <button id = "add" onClick={() => setList([...list, list[Math.floor(Math.random() * list.length)]])}>Add</button>
            </div>
            <div className="main">
                {<Movies value={input}/>}
            </div>
        </div>)
}

export default Search;