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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xcd729188, "i2c_add_numbered_adapter" },
	{ 0x13d9b37d, "gpiod_set_consumer_name" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9702D170B320C8A25C00FDC");
