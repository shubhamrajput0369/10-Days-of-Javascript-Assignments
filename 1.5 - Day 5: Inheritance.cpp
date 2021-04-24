// Author: Shubham Bhagwansing Rajput
// JS
class Rectangle {
    constructor(w, h) {
        this.w = w;
        this.h = h;
    }
}

Rectangle.prototype.area = function(){
    return (this.w * this.h);
}
class Square extends Rectangle{
    constructor(s)
    {
        super(s,s);
    }
}


/*
 * Create a Square class that inherits from Rectangle and implement its class constructor
 */


if (JSON.stringify(Object.getOwnPropertyNames(Square.prototype)) === JSON.stringify([ 'constructor' ])) {
    const rec = new Rectangle(3, 4);
const sqr = new Square(3);
    
    console.log(rec.area());
    console.log(sqr.area());
