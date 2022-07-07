import { BrowserRouter, Routes, Route } from "react-router-dom";
import Home from "./home_page/Home";
import Film from "./film_page/Film";
import Search from "./films_page/Search";
import Navbar from "./Navbar";
import NoPage from "./not_found_page/NoPage";
import react from "react";
import { useState, createContext } from "react";

import image1 from './images/betmen.jpeg';
import image2 from './images/doktor-strendzh-v-multivselennoy-bezumiya.jpeg';
import image3 from './images/fantasticheskie-tvari-tayny-dambldora.jpeg';
import image4 from './images/mir-yurskogo-perioda-gospodstvo.jpeg';
import image5 from './images/morbius.jpeg';
import image6 from './images/sonik-2-v-kino.jpeg';

const listOfMovies = [{name: "Betmen", image:image1, description: "Action, Triller, Crime"},
                        {name: "Doctor Strange", image:image2, description: "Horror, Fantasy, Action, Adventure"},
                        {name: "Fantastic Beasts",image:image3, description: "Adventure, Fantasy, Family"},
                        {name: "Jurassic World", image:image4, description: "Fantasy, Action, Adventure, Thriller"},
                        {name: "Morbius", image:image5, description: "Horron, Fantasy, Action, Thriller"},
                        {name: "Sonic 2", image:image6, description: "Cartoon, Fantasy, Action, Adventure, Family"}
                      ];

const FilmsContext = react.createContext();

function App() {

  const[list, setList] = useState(listOfMovies);

  return (
    <FilmsContext.Provider value={{list, setList}}>
      <BrowserRouter>
        <Navbar/>
        <Routes>
          <Route index element={<Home />} />
          <Route path="/Films" element={<Search />} />
          <Route path="Film" element={<Film />} />
          <Route path="*" element={<NoPage />} />
        </Routes>
      </BrowserRouter>
    </FilmsContext.Provider>
  );
}

function User() {
  const value = react.useContext(FilmsContext);  
    
  return <h1>{value}</h1>;
}

export default App;
export {FilmsContext};