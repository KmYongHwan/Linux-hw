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
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x35c871dd, "i2c_smbus_write_byte" },
	{ 0xb22c11af, "iio_push_event" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2560");
MODULE_ALIAS("of:N*T*Camstaos,tsl2560C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563C*");
MODULE_ALIAS("i2c:tsl2560");
MODULE_ALIAS("i2c:tsl2561");
MODULE_ALIAS("i2c:tsl2562");
MODULE_ALIAS("i2c:tsl2563");

MODULE_INFO(srcversion, "F1E94D83B2859C672615D74");
