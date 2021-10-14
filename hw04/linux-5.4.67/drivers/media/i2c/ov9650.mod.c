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
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfb988a95, "v4l2_ctrl_subdev_log_status" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8f75a92f, "gpiod_export" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xb6f50190, "regmap_get_device" },
	{ 0xdb77d3a6, "__devm_regmap_init_sccb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2917a31a, "__v4l2_ctrl_modify_range" },
	{ 0x9ee221e3, "v4l2_ctrl_activate" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,regmap-sccb");

MODULE_ALIAS("i2c:OV9650");
MODULE_ALIAS("i2c:OV9652");

MODULE_INFO(srcversion, "CD31A803C77A4B78134CE85");
