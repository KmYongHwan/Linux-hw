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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xad6318ed, "iio_read_const_attr" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x80f7ee42, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cadi,ad7745");
MODULE_ALIAS("of:N*T*Cadi,ad7745C*");
MODULE_ALIAS("of:N*T*Cadi,ad7746");
MODULE_ALIAS("of:N*T*Cadi,ad7746C*");
MODULE_ALIAS("of:N*T*Cadi,ad7747");
MODULE_ALIAS("of:N*T*Cadi,ad7747C*");
MODULE_ALIAS("i2c:ad7745");
MODULE_ALIAS("i2c:ad7746");
MODULE_ALIAS("i2c:ad7747");

MODULE_INFO(srcversion, "440C14DA70BB10747FE6897");
