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
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x9d30547, "i2c_root_adapter" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x61f0019a, "i2c_get_adapter" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x20a39986, "gpiod_set_array_value_cansleep" },
	{ 0xf1334ebe, "i2c_put_adapter" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-gpio");
MODULE_ALIAS("of:N*T*Ci2c-mux-gpioC*");

MODULE_INFO(srcversion, "72A79AD9F8E864DE24B7BAC");
