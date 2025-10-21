function verificarNum(){
    const resultado = document.getElementById('resultado');
    const numero = parseInt(document.getElementById('numero').value);


if(numero % 2 === 0){
    resultado.textContent = `O número ${numero} é par`;
} else{
    resultado.textContent = `O número ${numero} é ímpar`;
}
}