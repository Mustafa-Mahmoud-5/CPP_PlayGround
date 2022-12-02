const wrapper = () => {
    x();
    y();
}

const x = () => {
    console.log("X");
    y();
}

const y = () => {
    console.log("Y");
}

wrapper();
// files runs, x is registered, y is also, x is called, y is called in x
// the idea that in js unlike c++. functions aren't compiled before they are run
// in c++ functions body are called on compile. that's why any function we use in another must be above it