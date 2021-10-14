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
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xa15eb62c, "acpi_pm_wakeup_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ada0011, "input_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GOOG0006:*");

MODULE_INFO(srcversion, "19D7987FBA6F2E0CC4FFE43");
