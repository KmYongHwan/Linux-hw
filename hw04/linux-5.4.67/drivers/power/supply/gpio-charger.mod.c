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
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5d3e4191, "devm_request_any_context_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-charger");
MODULE_ALIAS("of:N*T*Cgpio-chargerC*");

MODULE_INFO(srcversion, "EFE8EB870F7178FE6D536A4");
