Integrantes
1.-  Eugenio Román Cortés Egaña / Rut: 22.405.687-7 /Usuario: QuenoLL / Carrera: ICCI
2.-  Matías Nicolás Núñez González / Rut: 22.256.666-5 / Usuario: Manugooo / Carrera: ICCI

Este código está realizado en lenguaje de programación C++, sirve para gestionar la atención de pacientes de un
hospital, usando estructura de datos tales como pilas, colas y listas enlazadas, el menú es bastante didáctico, por lo
que una explicación extensa en este Readme no es necesario.
Para su compilación es necesario usar el siguiente comando desde una terminal ubicada en lógica:
g++ Main.cpp SystemImpl.cpp ../Dominio/*.cpp -o Main && ./Main (Mac/Linux) 
g++ Main.cpp SystemImpl.cpp ../Dominio/*.cpp -o Main && .\Main (Windows) 

Breve resumen de cómo funciona:

Al iniciar se leen los pacientes que estan dentro del hospital Marmaja y entran a la cola de espera según el orden del archivo,
luego cada atención de paciente saca al primero de la cola  y lo deriva a la lista de su departamento además de ser guardado en el historial.
Cada departamento guarda a sus pacientes en una lista enlazada.
El historial es una pila que muestra del más reciente al más antiguo


Usamos sistema implementado y 


Usamos 
