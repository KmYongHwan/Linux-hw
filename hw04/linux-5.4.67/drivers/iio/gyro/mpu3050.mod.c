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
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x807a11f5, "iio_trigger_poll_chained" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0xef9dd08a, "iio_read_mount_matrix" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc030aca9, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x37daa95b, "iio_show_mount_matrix" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,i2c-mux,industrialio");

MODULE_ALIAS("of:N*T*Cinvensense,mpu3050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu3050C*");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050C*");
MODULE_ALIAS("i2c:mpu3050");

MODULE_INFO(srcversion, "1BE7B8FC7090FB81418866A");
