window.onload = function(){
    let area = document.getElementById('area');
    let ctx = area.getContext("2d");

    setInterval(game, 1000/15);

    let lar = 20,
    alt = 20,
    qtd_d_blocos = [lar, alt],
    velocidade = 1.0, //velocidade da snake no tabuleiro
    v = [0, 0], //velocidade x e y igual a zero
    cabeca = [10, 10],
    calda = [],
    tam_calda = 5
    fruta [15, 10];
    
    function game() {
        for(let i = 0; i < 2; i++){
            cabeca[i] = v[i];
            if(cabeca[i] < 0)
                cabeca[i] = qtd_d_blocos[i] - 1;
            if(cabeca[i] > qtd_d_blocos[i] - 1)
                cabeca[i] = 0;
        }
    }
    ctx.fillStyle = "black";
    ctx.fillRect(0,0, stage.width, stage.height);

    ctx.fillStyle = "red";
    ctx.fillRect(ax*top, ay*tp, tp, tp);
}