<?php
	echo "Teste arduino<br>";
	echo "Numero lido: "; 
	echo $_REQUEST["numero"];

	$porta = "/dev/cu.wchusbserial410";
	exec("stty -F $porta raw speed 9600");
	$conectaArduino = fopen($porta, "w");
	fwrite($conectaArduino, $_REQUEST["numero"]);		
	//fclose($conectaArduino);
?>