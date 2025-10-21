function verificarPalindromo() {
    const input = document.getElementById("palavra");
    const palavraOriginal = input.value.toLowerCase().replace(/[^a-z0-9]/g, ''); 
    const resultadoElemento = document.getElementById("resultado");

    
    const palavraInvertida = palavraOriginal.split('').reverse().join('');

   
    if (palavraOriginal === palavraInvertida) {
        resultadoElemento.textContent = `"${input.value}" é um palíndromo!`;   
    } else {
        resultadoElemento.textContent = `"${input.value}" não é um palíndromo.`;
    }
}
