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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0x1596983c, "gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7b277b70, "acpi_device_get_match_data" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C40:*");
MODULE_ALIAS("acpi*:ACPI0011:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "CF130AD740F60C660E67E33");
