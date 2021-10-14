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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x85b7373, "spi_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4788e517, "hwmon_device_register" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x6ce22f0f, "hwmon_device_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:adcxx1s");
MODULE_ALIAS("spi:adcxx2s");
MODULE_ALIAS("spi:adcxx4s");
MODULE_ALIAS("spi:adcxx8s");

MODULE_INFO(srcversion, "B0C5C316B7A87133E1533CB");
