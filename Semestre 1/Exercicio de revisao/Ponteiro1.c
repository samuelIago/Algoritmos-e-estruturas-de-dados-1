/*01. Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões v[2] e v+2.
                            RESPOSTA:
    A diferença entre v[2] e v+2 é que em v[2] está sendo acessado o conteudo armazenado na posição 2 desse vetor.
    E em v+2 oque está acontecendo é que caso v seja um ponteiro, seu endereço está subindo duas unidades acima do seu endereço original. Exemplo: caso seu endereço original fosse 100 e cada endereço fosse 4 bytes de diferença, então v+2 seria 108, pois v+0= endereço 100 e v+1= endereço 104.

02. Suponha que os elementos do vetor v são do tipo int e cada int ocupa 4 bytes no seu computador. Se o endereço de v[0] é 55000, qual o valor da expressão v+3. 

    Se o endereço original for 55000 e cada int ocupar 4 bytes, v+3 significa que o endereço desse vetor subiu 3 unidades comparada a sua posição original, ou seja, 3 * 4 = 12 então o valor do novo endereço é 55012.

*/