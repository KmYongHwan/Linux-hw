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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x4e2232a7, "__regmap_init_i2c" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x9f7fec7b, "regmap_exit" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Choperf,hp03");
MODULE_ALIAS("of:N*T*Choperf,hp03C*");
MODULE_ALIAS("i2c:hp03");

MODULE_INFO(srcversion, "A0F237C958B99AB887542F1");
