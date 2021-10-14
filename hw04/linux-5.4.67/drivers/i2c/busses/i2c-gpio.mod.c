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
	{ 0xc5850110, "printk" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8fc47b8, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5f46ef43, "gpiod_cansleep" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-algo-bit");


MODULE_INFO(srcversion, "362BC45DFBB052825D1034C");
