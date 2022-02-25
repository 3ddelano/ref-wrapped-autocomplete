extends Node2D

func _ready() -> void:
	var alpha = CustomClassAlpha.new()

	# Calling new() in gdscript
	var beta = CustomClassBeta.new()

	# Autocomplete is working
	beta.some_method()
	beta.some_other_method()


	# Note: adding static type hint to either
	# ptr_beta or ref_beta crashes
	# the godot scene

	# Pointer to CustomClassBeta
	var ptr_beta: CustomClassBeta = alpha.return_beta()

	# No autocomplete
	ptr_beta.some_method()
	ptr_beta.some_other_method()
	ptr_beta.method_gamma()


	# Ref<CustomClassBeta>
	var ref_beta = alpha.return_ref_beta()

	# No autocomplete
	ref_beta.some_method()
	ref_beta.some_other_method()
	ref_beta.method_gamma()
