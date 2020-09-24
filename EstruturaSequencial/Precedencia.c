/**
 
PRECEDÊNCIA E ASSOCIATIVIDADE DE OPERADORES C

Símbolo	            Tipo de operação	        Capacidade de associação

[ ] ( ) . ->
++``--(sufixo)	     Expression	                Da esquerda para a direita

sizeof & * + - ~ !
++``--(prefixo)	            Unário	            Da direita para a esquerda

typecasts	                Unário	            Da direita para a esquerda

* / %	                Multiplicativo	        Da esquerda para a direita

+ -	                    Aditiva	                Da esquerda para a direita

<< >>	                Deslocamento bit a bit	Da esquerda para a direita

< > <= >=	            Relacional	            Da esquerda para a direita

== !=	                Igualitário	            Da esquerda para a direita

&	                    Bitwise-AND	            Da esquerda para a direita
^	                    Bitwise-exclusive-OR	Da esquerda para a direita
|	                    Bitwise-inclusive-OR	Da esquerda para a direita

&&	                    Logical-AND	            Da esquerda para a direita
||	                    Logical-OR	            Da esquerda para a direita
? :	                    Expressão condicional	Da direita para a esquerda

= *= /= %=
+= -= <<= >>= &=        Atribuição simples
^= |=	                e composta 2	        Da direita para a esquerda
*/
