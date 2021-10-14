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
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x6bec4894, "gpiochip_is_requested" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cexar,xra1403");
MODULE_ALIAS("of:N*T*Cexar,xra1403C*");
MODULE_ALIAS("spi:xra1403");

MODULE_INFO(srcversion, "7870FFFAEB27DBA828EB9DD");
