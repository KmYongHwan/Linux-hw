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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x4a6704bc, "devm_gpio_request" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max8903");
MODULE_ALIAS("of:N*T*Cmaxim,max8903C*");

MODULE_INFO(srcversion, "624BAB860654E0501441635");
