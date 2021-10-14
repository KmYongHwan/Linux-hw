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
	{ 0x9a43e199, "_dev_info" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2917a31a, "__v4l2_ctrl_modify_range" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:IMX274");
MODULE_ALIAS("of:N*T*Csony,imx274");
MODULE_ALIAS("of:N*T*Csony,imx274C*");

MODULE_INFO(srcversion, "B9F5D30A8B1632E6722E049");
