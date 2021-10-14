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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x38d50001, "ad_sd_validate_trigger" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x815588a6, "clk_enable" },
	{ 0x73aedb43, "ad_sd_read_reg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x671fc7d3, "ad_sd_reset" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xaeec1f4b, "ad_sd_setup_buffer_and_trigger" },
	{ 0xd30a5a06, "ad_sd_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x5999ddea, "ad_sd_calibrate_all" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x9553f65f, "ad_sigma_delta_single_conversion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3168e501, "ad_sd_write_reg" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb3b79697, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad_sigma_delta,industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad7190");
MODULE_ALIAS("of:N*T*Cadi,ad7190C*");
MODULE_ALIAS("of:N*T*Cadi,ad7192");
MODULE_ALIAS("of:N*T*Cadi,ad7192C*");
MODULE_ALIAS("of:N*T*Cadi,ad7193");
MODULE_ALIAS("of:N*T*Cadi,ad7193C*");
MODULE_ALIAS("of:N*T*Cadi,ad7195");
MODULE_ALIAS("of:N*T*Cadi,ad7195C*");
MODULE_ALIAS("spi:ad7190");
MODULE_ALIAS("spi:ad7192");
MODULE_ALIAS("spi:ad7193");
MODULE_ALIAS("spi:ad7195");

MODULE_INFO(srcversion, "FCB86A26961A371543B207B");
