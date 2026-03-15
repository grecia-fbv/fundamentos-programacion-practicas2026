Algoritmo Calculo_de_salario
	
	Definir horas_trabajadas, pago_por_hora, salario, bono Como Real
	
	Escribir "Ingrese el total de horas trabajadas: "
	Leer horas_trabajadas
	
	Escribir "Ingrese el pago por hora: "
	Leer pago_por_hora
	
	salario = horas_trabajadas * pago_por_hora
	
	bono = salario * (1+0.10)
	
	Si horas_trabajadas >= 40 Entonces
		Escribir "Usted tiene un bono adicional del 10% sobre su salario, su salario total es de Bs.", bono
	SiNo
		Escribir "Salario total de Bs.", salario
	FinSi
	
FinAlgoritmo
