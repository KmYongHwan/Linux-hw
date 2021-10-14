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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4062e0f5, "ksz8795_switch_register" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x27810ed9, "ksz_switch_alloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xadc77dc7, "ksz_switch_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ksz8795,ksz_common");

MODULE_ALIAS("of:N*T*Cmicrochip,ksz8765");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8765C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8794");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8794C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8795C*");

MODULE_INFO(srcversion, "291DE4A32A5DFD15016DD0E");
