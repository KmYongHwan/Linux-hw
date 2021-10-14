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
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x63d98d0f, "regulator_is_enabled" },
	{ 0x63c486c2, "regulator_count_voltages" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x150a1163, "devm_regulator_get_exclusive" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0xdddb7baf, "regulator_list_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18BAD9A75D8B3563FC92F3E");
