import { Link, Outlet } from "react-router-dom";
import './Navbar.css'

export default function Navbar() {
    return(
        <div id = 'Navbar'>
            <Link to = '' className = 'navbar'>Home</Link>
            <Link to = '/Films' className = 'navbar'>Films</Link>
            <Outlet/>
        </div>
    )
}