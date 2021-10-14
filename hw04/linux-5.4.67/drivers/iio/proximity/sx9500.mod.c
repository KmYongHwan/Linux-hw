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
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29361773, "complete" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:sx9500");
MODULE_ALIAS("of:N*T*Csemtech,sx9500");
MODULE_ALIAS("of:N*T*Csemtech,sx9500C*");
MODULE_ALIAS("acpi*:SSX9500:*");
MODULE_ALIAS("acpi*:SASX9500:*");

MODULE_INFO(srcversion, "10026BB0DC169675F3791D1");
