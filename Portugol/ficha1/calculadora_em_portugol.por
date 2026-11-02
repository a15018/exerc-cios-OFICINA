programa {
	real num1,num2
	caracter operador
	funcao inicio() {
		escreva("qual o seu primeiro numero? \n")
		leia(num1)
		escreva("qual o seu segundo numero? \n")
		leia(num2)
		escreva("qual o operador matematico?(+,-,*,/ ) ")
		leia(operador)


		escolha(operador){
			caso '*': 
				escreva(num1*num2)
				pare
			caso '+':
				escreva(num1 + num2)
				pare
			caso '-':
				escreva(num1 - num2)
				pare
			caso '/':
				se (num2 == 0){
					escreva("impossivel dividir por 0")
				} senao{
					escreva(num1/num2)
				}
				pare
			caso contrario: 
				escreva("operador invalido")
		}
	}
}
