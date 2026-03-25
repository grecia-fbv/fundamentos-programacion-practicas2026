Algoritmo Descuento_de_una_compra
	
	Definir total_compra, total_descuento Como Real
	
	Escribir "Escriba el monto total de su compra: "
	Leer total_compra
	
	total_descuento = total_compra*0.9
	
	Si total_compra > 100 Entonces
		Escribir "Descuento aplicado del 10%, el monto total a pagar es Bs.", total_descuento
	SiNo
		Si total_compra <= 100 Entonces
			Escribir "El monto total a pagar es de Bs.", total_compra
		FinSi
	FinSi
	
FinAlgoritmo
