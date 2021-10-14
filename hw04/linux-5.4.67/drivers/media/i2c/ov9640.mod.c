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
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc289ab08, "v4l2_clk_get" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb6d9da7, "v4l2_clk_disable" },
	{ 0xc8fdfee7, "v4l2_clk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x2a03cbd6, "v4l2_clk_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:ov9640");

MODULE_INFO(srcversion, "59021C27B1CCEA711FC1C33");
