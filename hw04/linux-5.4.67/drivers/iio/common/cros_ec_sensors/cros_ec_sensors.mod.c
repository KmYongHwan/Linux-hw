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
	{ 0xef238093, "cros_ec_sensors_core_read_avail" },
	{ 0x56c7e26, "cros_ec_sensors_pm_ops" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc79cf444, "cros_ec_sensors_core_read" },
	{ 0xe7ffbbc0, "cros_ec_motion_send_host_cmd" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2cc28206, "cros_ec_sensors_core_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x9971dac4, "cros_ec_sensors_capture" },
	{ 0xd34ef62f, "cros_ec_sensors_read_lpc" },
	{ 0x1eb48ae7, "cros_ec_sensors_read_cmd" },
	{ 0xac1d2e2f, "cros_ec_sensors_ext_info" },
	{ 0xe3f6e445, "cros_ec_sensors_core_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec_sensors_core,industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("platform:cros-ec-accel");
MODULE_ALIAS("platform:cros-ec-gyro");
MODULE_ALIAS("platform:cros-ec-mag");

MODULE_INFO(srcversion, "EB40D3F4AE31E1FD7AA49FB");
