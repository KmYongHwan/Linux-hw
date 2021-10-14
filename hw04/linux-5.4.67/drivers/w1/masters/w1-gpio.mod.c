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
	{ 0xf9a482f9, "msleep" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8528ade2, "w1_add_master_device" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xfee2bce, "devm_gpiod_get_index_optional" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0x20c7e15, "w1_remove_master_device" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "D68AAEA6B1450D31FBF8E9E");
