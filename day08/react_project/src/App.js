import { BrowserRouter, Routes, Route } from "react-router-dom";
import Home from "./home_page/Home";
// import Films from "./films_page/Search";
import Film from "./film_page/Film";
import Search from "./films_page/Search";
import Navbar from "./Navbar";
import NoPage from "./not_found_page/NoPage";
// import './Movie.css';

function App() {
  // return (
  //   <div className="App">
  //     <Search/>

  //   </div>
  // );
  return (
    <BrowserRouter>
        <Navbar/>
      <Routes>
        <Route index element={<Home />} />
        <Route path="/Films" element={<Search />} />
        <Route path="Film" element={<Film />} />
        <Route path="*" element={<NoPage />} />
      </Routes>
    </BrowserRouter>
  );
}

export default App;