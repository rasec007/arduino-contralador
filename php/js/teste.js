function ligar(val) {
	console.log('aaaaa');
	if ($("#ar1").text() == 'Ligar') {
		$("#ar1").text('Desligar');
		$("#ar1").toggleClass('btn-danger');
	} else {
		$("#ar1").text('Ligar');
		$("#ar1").toggleClass('btn-info');
	}
	
}