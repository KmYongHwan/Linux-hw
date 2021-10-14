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
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x9415ca79, "__module_get" },
	{ 0x963cf8c8, "get_device" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x82e0d9e, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:si1132");
MODULE_ALIAS("i2c:si1141");
MODULE_ALIAS("i2c:si1142");
MODULE_ALIAS("i2c:si1143");
MODULE_ALIAS("i2c:si1145");
MODULE_ALIAS("i2c:si1146");
MODULE_ALIAS("i2c:si1147");

MODULE_INFO(srcversion, "1E8AA6AB692C40C90C9BC58");
