import { configureStore } from '@reduxjs/toolkit';
import ProductReducer from"../features/product-list/ProductListSlice"

export const store = configureStore({
  reducer: {
    product: ProductReducer,
  },
});
