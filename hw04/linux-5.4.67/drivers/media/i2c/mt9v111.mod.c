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
	{ 0x82d7b2fd, "v4l2_subdev_link_validate" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xddb6a0e4, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2d52deaf, "devm_clk_put" },
	{ 0x7523797d, "devm_gpiod_put" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "29AAC05BEFD72385006A620");
