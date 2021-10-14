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
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0x38d50001, "ad_sd_validate_trigger" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x5999ddea, "ad_sd_calibrate_all" },
	{ 0x73aedb43, "ad_sd_read_reg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x671fc7d3, "ad_sd_reset" },
	{ 0xaeec1f4b, "ad_sd_setup_buffer_and_trigger" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xd30a5a06, "ad_sd_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9553f65f, "ad_sigma_delta_single_conversion" },
	{ 0x3168e501, "ad_sd_write_reg" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb3b79697, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ad_sigma_delta");

MODULE_ALIAS("spi:ad7785");
MODULE_ALIAS("spi:ad7792");
MODULE_ALIAS("spi:ad7793");
MODULE_ALIAS("spi:ad7794");
MODULE_ALIAS("spi:ad7795");
MODULE_ALIAS("spi:ad7796");
MODULE_ALIAS("spi:ad7797");
MODULE_ALIAS("spi:ad7798");
MODULE_ALIAS("spi:ad7799");

MODULE_INFO(srcversion, "8CEE3963A00274A20F674EE");
