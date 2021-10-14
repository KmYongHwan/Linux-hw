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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x194ce418, "i2c_match_id" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Clltc,ltc4305");
MODULE_ALIAS("of:N*T*Clltc,ltc4305C*");
MODULE_ALIAS("of:N*T*Clltc,ltc4306");
MODULE_ALIAS("of:N*T*Clltc,ltc4306C*");
MODULE_ALIAS("i2c:ltc4305");
MODULE_ALIAS("i2c:ltc4306");

MODULE_INFO(srcversion, "9858DE9A41FD8F55F27C7D5");
