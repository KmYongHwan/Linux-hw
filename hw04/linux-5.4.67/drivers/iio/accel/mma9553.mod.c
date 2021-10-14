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
	{ 0x588f0134, "iio_enum_available_read" },
	{ 0x6ec70757, "iio_enum_write" },
	{ 0x51c6dcb2, "iio_enum_read" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x390093c4, "mma9551_read_accel_chan" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0xc831ec86, "mma9551_read_status_word" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x74ad1d86, "mma9551_write_config_words" },
	{ 0x236fd6e, "mma9551_app_reset" },
	{ 0x18fd5567, "mma9551_read_config_words" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xb9490297, "mma9551_read_version" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x8d430621, "mma9551_gpio_config" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x38f04260, "mma9551_read_status_words" },
	{ 0x79a5cb7d, "mma9551_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e4dbd57, "mma9551_read_config_word" },
	{ 0xa8926432, "mma9551_write_config_word" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x3bb3236e, "mma9551_set_device_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9553");
MODULE_ALIAS("acpi*:MMA9553:*");

MODULE_INFO(srcversion, "95F24BB36AD7146CA405A25");
