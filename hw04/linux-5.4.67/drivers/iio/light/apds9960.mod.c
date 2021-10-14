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
	{ 0xa16a4ff1, "pm_runtime_force_resume" },
	{ 0x7c86d216, "pm_runtime_force_suspend" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0xcc80f31e, "devm_iio_kfifo_allocate" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "1C62D4FADF9BBAAFFDC5B3B");
