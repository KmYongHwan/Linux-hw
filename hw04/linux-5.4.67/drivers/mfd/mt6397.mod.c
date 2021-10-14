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
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfcf15af8, "dev_get_regmap" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc07c9d98, "handle_level_irq" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:mt6397");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397C*");

MODULE_INFO(srcversion, "F11B32F8F9CC7D0A67E42C0");
