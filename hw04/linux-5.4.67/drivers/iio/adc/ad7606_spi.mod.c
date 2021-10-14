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
	{ 0xdc104716, "ad7606_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x3bebc5aa, "gpiod_set_array_value" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x4f13a302, "ad7606_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad7606");

MODULE_ALIAS("of:N*T*Cadi,ad7605-4");
MODULE_ALIAS("of:N*T*Cadi,ad7605-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606b");
MODULE_ALIAS("of:N*T*Cadi,ad7606bC*");
MODULE_ALIAS("of:N*T*Cadi,ad7616");
MODULE_ALIAS("of:N*T*Cadi,ad7616C*");
MODULE_ALIAS("spi:ad7605-4");
MODULE_ALIAS("spi:ad7606-4");
MODULE_ALIAS("spi:ad7606-6");
MODULE_ALIAS("spi:ad7606-8");
MODULE_ALIAS("spi:ad7606b");
MODULE_ALIAS("spi:ad7616");

MODULE_INFO(srcversion, "7A6AEB68F7ECBAFC7E3CD7D");
