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
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xf3b21588, "media_device_unregister_entity" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0x6b2b7841, "media_device_register_entity" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9425f1f7, "v4l2_subdev_notify_event" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "70829B65CC3343BC04AA06D");
