function calcularTabuada() {
    const Numero = document.getElementById('numero');
    const resultadoLista = document.getElementById('resultado');
    
    
    const numero = Number(Numero.value);


    for (let i = 1; i <= 10; i++) {
        const resultado = numero * i;
        
       
        const listItem = document.createElement('li');
        listItem.textContent = `${numero} x ${i} = ${resultado}`;
        
       
        resultadoLista.appendChild(listItem);
    }
}
