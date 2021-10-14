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
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x96848186, "scnprintf" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:tcs3472");

MODULE_INFO(srcversion, "F06194E5C3DC8AF50DFE012");
