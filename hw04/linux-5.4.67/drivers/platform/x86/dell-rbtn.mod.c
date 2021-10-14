#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xff282521, "rfkill_register" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x5ada0011, "input_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:DELRBTN:*");
MODULE_ALIAS("acpi*:DELLABCE:*");

MODULE_INFO(srcversion, "DCFBC8539677AB48B44248A");
