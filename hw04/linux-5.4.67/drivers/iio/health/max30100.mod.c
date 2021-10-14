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
	{ 0x890b3d61, "_dev_err" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0xcc80f31e, "devm_iio_kfifo_allocate" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cmaxim,max30100");
MODULE_ALIAS("of:N*T*Cmaxim,max30100C*");
MODULE_ALIAS("i2c:max30100");

MODULE_INFO(srcversion, "3A7E3FBD52114CEFDE13062");
