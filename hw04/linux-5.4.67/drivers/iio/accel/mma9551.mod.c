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
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb9490297, "mma9551_read_version" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x41ef446c, "mma9551_read_accel_scale" },
	{ 0x390093c4, "mma9551_read_accel_chan" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x5841ebfa, "mma9551_read_status_byte" },
	{ 0x8d430621, "mma9551_gpio_config" },
	{ 0x79a5cb7d, "mma9551_set_power_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x98475d5f, "mma9551_read_config_byte" },
	{ 0x32cbc863, "mma9551_update_config_bits" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbcd7fe96, "mma9551_sleep" },
	{ 0x3bb3236e, "mma9551_set_device_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,mma9551_core");

MODULE_ALIAS("i2c:mma9551");
MODULE_ALIAS("acpi*:MMA9551:*");

MODULE_INFO(srcversion, "DF69C6D66B58D58E52A7B5B");
