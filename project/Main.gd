extends Node2D

func _ready() -> void:
	var alpha = CustomClassAlpha.new()

	# CustomClassBeta
	var beta = CustomClassBeta.new()

	# Ref<CustomClassBeta>
	var ref_beta = alpha.return_ref_beta()

	# No autocomplete for ref_beta
	ref_beta.some_method()
	ref_beta.some_other_method()
	ref_beta.method_gamma()

	# Autocomplete available for beta
	beta.some_method()
	beta.some_other_method()
	beta.method_gamma()
