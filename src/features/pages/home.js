import React from "react";
import { ProductList } from "../product-list/ProductList";
import Navbar from"../navbar/navbar";

function home(){

    return (
        <Navbar>
        <ProductList/>
        </Navbar>
    )
}
export default home;