/*ellipse(179, 100, 101, 135);
//colorMode(HSB);

var k = 75;
var l = 47;
var zoom = 2.5;
var fator = 1;
var m = 0.3;
var N = 100;

var cor = function(x, y){
    //return pow(x - k, 2) + pow(y - l, 2) >= pow(m, 2);
    var re = 0, im = 0;
    for(var i = 0; i < 20; i++) {
        var re_ = re*re - im*im + x;
        var im_ = 2 * re * im + y;
        re = re_;
        im = im_;
        if(re*re + im*im > 4) {
            return i*23;
        }
    }
    return 255;
};


for(var i = 0; i < N; i++){
    for(var j = 0; j < N; j++){
        //ellipse(i*50, j*50, i*10, j*10);
        var x = (i - k) / 100*zoom;
        var y = (j - l) / 100*zoom;
        var c = cor(x,y);
        stroke(c, 200, 255);
        point(fator*i, fator*j);
        /*if(cor(x, y)){
            point(fator*i, fator*j);
        }*//*
    }
}
*/
var a = 84,
    b = 5,
    c = 84;
fill(a, b, c);
colorMode(HSB);

var d = 14,
    bg = 230,
    N = 568,
    fator = 1;

var cor = function(x, y) {
    var re = 0, im = 0;
    for (var i=0; i < 20; i++) {
        var re_ = re*re - im*im + x;
        var im_ = 2 * re * im + y;
        re = re_;
        im = im_;
        if (re*re + im*im > 4) { 
            return d * i;
        }
    }
    return bg;
}; 

var zoom = 0.17;
var dx = 128;
var dy = -150;
for (var i=0; i < N; i++) {
    for (var j=0; j < N; j++) {
        var x = (i - dx) / (N * zoom);
        var y = (j + dy) / (N * zoom);
        var c = cor(x, y);
        stroke(c, bg - c, bg - c);
        point(fator * i, fator * j);
    }
}


