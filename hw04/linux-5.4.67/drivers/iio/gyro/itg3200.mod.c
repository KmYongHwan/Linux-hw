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
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xd20a89aa, "iio_trigger_alloc" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xef9dd08a, "iio_read_mount_matrix" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x37daa95b, "iio_show_mount_matrix" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x6ddb75b6, "iio_trigger_free" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");

MODULE_ALIAS("of:N*T*Cinvensense,itg3200");
MODULE_ALIAS("of:N*T*Cinvensense,itg3200C*");
MODULE_ALIAS("i2c:itg3200");

MODULE_INFO(srcversion, "69597385AA462868D255363");
