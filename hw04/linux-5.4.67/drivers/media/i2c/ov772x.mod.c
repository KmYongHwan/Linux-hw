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
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfb988a95, "v4l2_ctrl_subdev_log_status" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xe4413db4, "clk_get" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb77d3a6, "__devm_regmap_init_sccb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xf2b4ea27, "gpiod_get_optional" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,regmap-sccb");

MODULE_ALIAS("of:N*T*Covti,ov7725");
MODULE_ALIAS("of:N*T*Covti,ov7725C*");
MODULE_ALIAS("of:N*T*Covti,ov7720");
MODULE_ALIAS("of:N*T*Covti,ov7720C*");
MODULE_ALIAS("i2c:ov772x");

MODULE_INFO(srcversion, "1ED0F84FCDF0352AA278C7E");
