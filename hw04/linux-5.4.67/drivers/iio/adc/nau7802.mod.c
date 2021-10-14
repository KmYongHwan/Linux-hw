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
	{ 0xf9a482f9, "msleep" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x29361773, "complete" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cnuvoton,nau7802");
MODULE_ALIAS("of:N*T*Cnuvoton,nau7802C*");
MODULE_ALIAS("i2c:nau7802");

MODULE_INFO(srcversion, "81C59D592B293D8D6F12191");
