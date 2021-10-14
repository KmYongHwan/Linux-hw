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
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3b13df12, "v4l2_async_register_subdev_sensor_common" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x610fc61f, "v4l2_ctrl_new_int_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0xb5ac3a1c, "v4l2_fwnode_endpoint_free" },
	{ 0xf82b48a0, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xc14688f3, "fwnode_graph_get_next_endpoint" },
	{ 0x5397f8e8, "dev_fwnode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x64a44a10, "__v4l2_ctrl_handler_setup" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x8b94c8a7, "pm_runtime_get_if_in_use" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-fwnode,mc,videodev");

MODULE_ALIAS("of:N*T*Csony,imx214");
MODULE_ALIAS("of:N*T*Csony,imx214C*");

MODULE_INFO(srcversion, "22DA232B1EF0EA362FFE3C0");
