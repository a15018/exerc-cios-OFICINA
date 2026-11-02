programa
{
	// Importa a biblioteca Útil para usar a função de pausa (aguarde)
	inclua biblioteca Util --> u
	
	funcao inicio()
	{
		// Vetor com os versos da música "Até Que Durou" (agora separados por vírgula)
		cadeia versos[] = {
			"Tentei fazer valer a pena",
			"Passei por cima dos problemas",
			"Achei que eu era o bastante",
			"Mas não fui pra você",
			"Tentei ser um cara perfeito",
			"Eu fiz as coisas do seu jeito",
			"Queria ser mais importante",
			"Mas não fui pra você",
			"Até que durou, me diz o porquê",
			"Perdeu tanto tempo aqui",
			"Te faço um favor, melhor eu sumir",
			"Fui mais um nas suas mãos",
			"Não sei se por carência ou falta de opção",
			"Só sei que eu senti amor",
			"Que pena, só eu senti amor",
			"Tentei ser um cara perfeito",
			"Eu fiz as coisas do seu jeito",
			"Queria ser mais importante",
			"Mas não fui pra você",
			"Até que durou, me diz o porquê",
			"Perdeu tanto tempo aqui",
			"Te faço um favor, melhor eu sumir",
			"Fui mais um nas suas mãos",
			"Não sei se por carência ou falta de opção",
			"Só sei que eu senti amor",
			"Que pena, só eu senti amor",
			"Até que durou, me diz o porquê",
			"Perdeu tanto tempo aqui",
			"Te faço um favor, melhor eu sumir",
			"Fui mais um nas suas mãos",
			"Não sei se por carência ou falta de opção",
			"Só sei que eu senti amor",
			"Que pena, só eu senti amor",
			"Que pena, só eu senti amor"
		}
		
		// Define o tempo de espera entre cada verso em milissegundos (Ex: 1500ms = 1.5 segundos)
		inteiro tempoDeEspera = 4000 
		
		// Chama a função para exibir os versos
		exibirVersoPorVerso(versos, tempoDeEspera)
	}

	// Função que recebe o vetor de versos e o tempo de pausa
	funcao exibirVersoPorVerso(cadeia texto[], inteiro milissegundos)
	{
		// Obtém automaticamente a quantidade de versos no vetor
		inteiro totalDeVersos = u.numero_elementos(texto)
		
		// Percorre e exibe cada verso com uma pausa intermediária
		para (inteiro i = 0; i < totalDeVersos; i++)
		{
			escreva(texto[i], "\n")
			u.aguarde(milissegundos) // Faz o programa esperar antes do próximo verso
		}
	}
}
