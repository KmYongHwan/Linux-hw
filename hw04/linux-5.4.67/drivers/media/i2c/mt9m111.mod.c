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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc289ab08, "v4l2_clk_get" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x3fdf0f67, "v4l2_fwnode_endpoint_parse" },
	{ 0xc14688f3, "fwnode_graph_get_next_endpoint" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xb6d9da7, "v4l2_clk_disable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xc8fdfee7, "v4l2_clk_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x2a03cbd6, "v4l2_clk_put" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("i2c:mt9m111");
MODULE_ALIAS("of:N*T*Cmicron,mt9m111");
MODULE_ALIAS("of:N*T*Cmicron,mt9m111C*");

MODULE_INFO(srcversion, "B0DE3539559E2C751C1AA06");
