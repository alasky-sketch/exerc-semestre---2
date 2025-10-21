function verificarVoto(){
    const idade  = parseInt(document.getElementById('idade').value);;
    const resultado = document.getElementById('resultado');


if(idade < 16){
    resultado.textContent = "Voto não permitido";
} else if(idade >= 16 && idade < 18){
    resultado.textContent = "Voto facultativo";
} else if(idade == 18 && idade < 70 ){
    resultado.textContent = "Voto obrigatótio";
} else{
    resultado.textContent = "Voto facultativo";
}

}