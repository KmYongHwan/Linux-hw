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
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x8b278a1a, "iio_triggered_buffer_setup" },
	{ 0x52e66277, "__iio_trigger_register" },
	{ 0x9415ca79, "__module_get" },
	{ 0x963cf8c8, "get_device" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x96f138a7, "iio_trigger_unregister" },
	{ 0x730aa4, "iio_triggered_buffer_cleanup" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:ccs811");

MODULE_INFO(srcversion, "B70D36EA656A044DCF3F363");
