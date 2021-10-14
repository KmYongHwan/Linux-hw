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
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xa1799421, "i2c_smbus_read_byte" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x12a38747, "usleep_range" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cpulsedlight,lidar-lite-v2");
MODULE_ALIAS("of:N*T*Cpulsedlight,lidar-lite-v2C*");
MODULE_ALIAS("of:N*T*Cgrmn,lidar-lite-v3");
MODULE_ALIAS("of:N*T*Cgrmn,lidar-lite-v3C*");
MODULE_ALIAS("i2c:lidar-lite-v2");
MODULE_ALIAS("i2c:lidar-lite-v3");

MODULE_INFO(srcversion, "8FD075EE8262360DF5AB74E");
