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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:kmx611021");
MODULE_ALIAS("acpi*:KMX61021:*");

MODULE_INFO(srcversion, "E49B0984231126F2301A83F");
