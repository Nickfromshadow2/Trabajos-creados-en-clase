# Mariely Nicol Hiraeta Henrriquez
# 202510050220

# SNNIPET PARA HOLA MUNDO
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "hola",
		"body": [
			"print(\"hola mundo!\");",
			"$2"
		],
		"description": "Log output to console"
	}
}
# SNNIPET PARA LIMPIAR PANTALLA
{
	// Place your global snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "Limpiar",
		"body": [
			"import os",
			"os.system('cls' if os.name == 'nt' else 'crear')",
			"$2"
		],
		"description": "Limpia la pantalla de la consola"
	}
}
# SNNIPET PARA NUMEROS ENTEROS
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "numeroentero",
		"body": [
			"numeroentero=int(input('Digite una variable entera'))",
			"$2"
		],
		"description": "Snipped que define una variable entera"
	}
}
# SNNIPET PARA NUMEROS DECIMALES
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "numerodecimal",
		"body": [
			"numerodecimal=float(input('Digite una variable decimal'))",
			"$2"
		],
		"description": "Snipped que define una variable decimal"
	}
}
# SNNIPET PARA PRINTF
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "printf",
		"body": [
			"print(f\"texto {$1}... text{$2}... texto.\")",
			"$3"
		],
		"description": "Printf en python"
	}
}
# SNNIPET PARA VARIABEL STRING
{
	// Place your GLOBAL snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	//Example:
	"Print to console": {
		"scope": "javascript,typescript,python",
		"prefix": "variablestring",
		"body": [
			"variablestring=str(input('Digite un numero para string'))",
			"$2"
		],
		"description": "Snipped para usar variables en forma cadena o string"
	}
}