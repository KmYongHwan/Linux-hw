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
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xede283d, "release_firmware" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8f75a92f, "gpiod_export" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:s5k4ecgx");

MODULE_INFO(srcversion, "CDF337C3F47A6542E6880E6");
