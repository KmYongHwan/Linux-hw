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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfb988a95, "v4l2_ctrl_subdev_log_status" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x3fdf0f67, "v4l2_fwnode_endpoint_parse" },
	{ 0xc14688f3, "fwnode_graph_get_next_endpoint" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5850110, "printk" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("i2c:ov7670");
MODULE_ALIAS("i2c:ov7675");

MODULE_INFO(srcversion, "932A42B3CF85321E056ECBA");
