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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8f75a92f, "gpiod_export" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:NOON010PC30");

MODULE_INFO(srcversion, "5B6D6FA7FC289422423D16A");
