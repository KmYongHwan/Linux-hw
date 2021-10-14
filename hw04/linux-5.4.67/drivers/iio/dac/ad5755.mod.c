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
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad5755");
MODULE_ALIAS("of:N*T*Cadi,ad5755C*");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1C*");
MODULE_ALIAS("of:N*T*Cadi,ad5757");
MODULE_ALIAS("of:N*T*Cadi,ad5757C*");
MODULE_ALIAS("of:N*T*Cadi,ad5735");
MODULE_ALIAS("of:N*T*Cadi,ad5735C*");
MODULE_ALIAS("of:N*T*Cadi,ad5737");
MODULE_ALIAS("of:N*T*Cadi,ad5737C*");
MODULE_ALIAS("spi:ad5755");
MODULE_ALIAS("spi:ad5755-1");
MODULE_ALIAS("spi:ad5757");
MODULE_ALIAS("spi:ad5735");
MODULE_ALIAS("spi:ad5737");

MODULE_INFO(srcversion, "4793100107A23C873C3AD12");
