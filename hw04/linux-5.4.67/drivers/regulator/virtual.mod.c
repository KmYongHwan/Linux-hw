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
	{ 0xc32d8beb, "regulator_get_mode" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xf0b5498d, "regulator_set_current_limit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2bc29442, "regulator_set_mode" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B141A334F441E1F0DF5EB8");
