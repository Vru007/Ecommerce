import React from 'react';
import logo from './logo.svg';
// import { Counter } from './features/counter/Counter';
import {ProductList} from './features/product-list/ProductList'
import Navbar from'./features/navbar/navbar';
import './App.css';
import HomePage from"./features/pages/home";
import LoginPage from './features/pages/loginpage';
import SignupPage from './features/pages/signuppage';
import CartPage from"./features/pages/CartPage";
import CheckOutPage from"./features/pages/CheckoutPage";
import { createRoot } from "react-dom/client";
import ProductDetail from"./features/pages/ProductDetailPage";
import {
  createBrowserRouter,
  RouterProvider,
  Route,
  Link,
} from "react-router-dom";

const router = createBrowserRouter([
  {
    path: "/",
    element: (<HomePage></HomePage>),
  },
  {
    path: "/login",
    element:(<LoginPage></LoginPage>),
  },
  {
    path: "/signup",
    element:(<SignupPage></SignupPage>),
  },
  {
      path:"/cart",
      element:(<CartPage></CartPage>),
  },
  {
    path:"/checkout",
    element:(<CheckOutPage></CheckOutPage>)
  },
  {
    path:"/productspecs",
    element:(<ProductDetail></ProductDetail>)
  },
]);
function App() {
  return (
    <div className="App">
  <RouterProvider router={router}/> 
  
    </div>
  );
}

export default App;
